// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01Pawn.h"
#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "EscudoEscena.h"
#include "Components/SceneComponent.h"
#include "EscudoActor.h"
#include "NaveAlatoriaAerea.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/CharacterMovementComponent.h"

const FName AGalaga_USFX_L01Pawn::MoveForwardBinding("MoveForward");
const FName AGalaga_USFX_L01Pawn::MoveRightBinding("MoveRight");
const FName AGalaga_USFX_L01Pawn::FireForwardBinding("FireForward");
const FName AGalaga_USFX_L01Pawn::FireRightBinding("FireRight");

AGalaga_USFX_L01Pawn::AGalaga_USFX_L01Pawn()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);

	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	GunOffset2 = FVector(90.f, 90.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
	Score = 0;

	PrimaryActorTick.bCanEverTick = true;
	bCrearBarr = true;
	disparoDoble = false;
	soltBomb = true;
}
void AGalaga_USFX_L01Pawn::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicio = GetActorLocation();
	UbicacionInicioX = GetActorLocation().X;
	UbicacionInicioY = GetActorLocation().Y;

}

void AGalaga_USFX_L01Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);

	FInputAxisKeyMapping movDiagIzqKey("diagIzq", EKeys::Q, 1.0f);
	FInputAxisKeyMapping movDiagDerKey("diagDer", EKeys::E, 1.0f);
	FInputAxisKeyMapping movDiagMIzqKey("diagMIzq", EKeys::Z, 1.0f);
	FInputAxisKeyMapping movDiagMDerKey("diagMDer", EKeys::C, 1.0f);
	FInputActionKeyMapping salto("Salto", EKeys::T, 0, 0, 0, 0);
	FInputActionKeyMapping CrearBarreraKey("CrearBarrera", EKeys::K, 0, 0, 0, 0);
	FInputActionKeyMapping ActivDoDispKey("ActivDobDisparo", EKeys::J, 0, 0, 0, 0);
	FInputActionKeyMapping devPrincKey("devPrinc", EKeys::G, 0, 0, 0, 0);
	FInputActionKeyMapping BombaKey("Bomba", EKeys::B, 0, 0, 0, 0);

	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);

	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(movDiagIzqKey);
	PlayerInputComponent->BindAxis("diagIzq", this, &AGalaga_USFX_L01Pawn::movIzq);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(movDiagDerKey);
	PlayerInputComponent->BindAxis("diagDer", this, &AGalaga_USFX_L01Pawn::movDer);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(movDiagMIzqKey);
	PlayerInputComponent->BindAxis("diagMIzq", this, &AGalaga_USFX_L01Pawn::movMIzq);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(movDiagMDerKey);
	PlayerInputComponent->BindAxis("diagMDer", this, &AGalaga_USFX_L01Pawn::movMDer);
	UPlayerInput::AddEngineDefinedActionMapping(salto);
	PlayerInputComponent->BindAction("Salto", IE_Pressed, this, &AGalaga_USFX_L01Pawn::Salto);
	UPlayerInput::AddEngineDefinedActionMapping(CrearBarreraKey);
	PlayerInputComponent->BindAction("CrearBarrera", IE_Pressed, this, &AGalaga_USFX_L01Pawn::CrearBarrera);
	UPlayerInput::AddEngineDefinedActionMapping(ActivDoDispKey);
	PlayerInputComponent->BindAction("ActivDobDisparo", IE_Pressed, this, &AGalaga_USFX_L01Pawn::ActivarDobleDisparo);
	UPlayerInput::AddEngineDefinedActionMapping(devPrincKey);
	PlayerInputComponent->BindAction("devPrinc", IE_Pressed, this, &AGalaga_USFX_L01Pawn::devolverAlPrincipio);
	UPlayerInput::AddEngineDefinedActionMapping(BombaKey);
	PlayerInputComponent->BindAction("Bomba", IE_Pressed, this, &AGalaga_USFX_L01Pawn::soltarBomba);
}
void AGalaga_USFX_L01Pawn::movIzq(float Value)
{
	const FVector Velocidad = FVector(650.0f, -650.0f, 0.0f);

	AddActorWorldOffset(Velocidad * Value * GetWorld()->GetDeltaSeconds(), true);

	if (Value)
	{
		FRotator RotQ = Velocidad.Rotation();
		SetActorRotation(RotQ);
	}
}

void AGalaga_USFX_L01Pawn::movDer(float Value)
{
	const FVector Velocidad = FVector(650.0f, 650.0f, 0.0f);

	AddActorWorldOffset(Velocidad * Value * GetWorld()->GetDeltaSeconds(), true);

	if (Value)
	{
		FRotator RotE = Velocidad.Rotation();
		SetActorRotation(RotE);
	}
}

void AGalaga_USFX_L01Pawn::movMIzq(float Value)
{
	const FVector Velocidad = FVector(-650.0f, -650.0f, 0.0f);

	AddActorWorldOffset(Velocidad * Value * GetWorld()->GetDeltaSeconds(), true);

	if (Value)
	{
		FRotator RotZ = Velocidad.Rotation();
		SetActorRotation(RotZ);
	}
}

void AGalaga_USFX_L01Pawn::movMDer(float Value)
{
	const FVector Velocidad = FVector(-650.0f, 650.0f, 0.0f);

	AddActorWorldOffset(Velocidad * Value * GetWorld()->GetDeltaSeconds(), true);

	if (Value)
	{
		FRotator RotC = Velocidad.Rotation();
		SetActorRotation(RotC);
	}
}

void AGalaga_USFX_L01Pawn::Salto()
{
	const float FuerzaSalto = 11000;
		const FVector Impulso = FVector(0.0f, 0.0f, 1.0f) * FuerzaSalto;

		AddActorLocalOffset(FVector(0.0f, 0.0f, FuerzaSalto * GetWorld()->GetDeltaSeconds()), true);

		GetWorldTimerManager().SetTimer(TimerHandle_Salto, this, &AGalaga_USFX_L01Pawn::descender, 0.4f, false);

}

void AGalaga_USFX_L01Pawn::descender()
{
	const float FuerzaSalto = 11000.0f;
	const FVector Impulso = FVector(0.0f, 0.0f, -1.0f) * FuerzaSalto;

	AddActorLocalOffset(FVector(0.0f, 0.0f, -FuerzaSalto * GetWorld()->GetDeltaSeconds()), true);
}

void AGalaga_USFX_L01Pawn::CrearBarrera()
{
	if (!bCrearBarr)
	{
		return;
	}
	FVector Location = GetActorLocation() + FVector(100.0f, 0.0f, 0.0f);
	FRotator Rotation = GetActorRotation();
	AEscudoActor* CrearBarreraActor = GetWorld()->SpawnActor<AEscudoActor>(AEscudoActor::StaticClass(), Location, Rotation);
	AEscudoActor* CrearBarreraActor1 = GetWorld()->SpawnActor<AEscudoActor>(AEscudoActor::StaticClass(), Location, Rotation);
	AEscudoActor* CrearBarreraActor2 = GetWorld()->SpawnActor<AEscudoActor>(AEscudoActor::StaticClass(), Location, Rotation);
	AEscudoActor* CrearBarreraActor3 = GetWorld()->SpawnActor<AEscudoActor>(AEscudoActor::StaticClass(), Location, Rotation);
	if (CrearBarreraActor != nullptr)
	{
		CrearBarreraActor->SetActorLocation(Location);
		CrearBarreraActor->SetActorRotation(Rotation);
		CrearBarreraActor1->SetActorLocation(Location + FVector(-100.0f, 100.0f, 0.0f));
		CrearBarreraActor1->SetActorRotation(Rotation + FRotator(0.0f, 90.0f, 0.0f));
		CrearBarreraActor2->SetActorLocation(Location + FVector(-100.0f, -100.0f, 0.0f));
		CrearBarreraActor2->SetActorRotation(Rotation + FRotator(0.0f, -90.0f, 0.0f));
		CrearBarreraActor3->SetActorLocation(Location + FVector(-200.0f, 0.0f, 0.0f));
		CrearBarreraActor3->SetActorRotation(Rotation);

		// Crear un delegado de temporizador
		FTimerDelegate TimerDel;
		TimerDel.BindLambda([CrearBarreraActor, CrearBarreraActor1, CrearBarreraActor2, CrearBarreraActor3]()
			{
				if (CrearBarreraActor && CrearBarreraActor->IsValidLowLevel())
				{
					CrearBarreraActor->Destroy();
				}
				if (CrearBarreraActor1 && CrearBarreraActor1->IsValidLowLevel())
				{
					CrearBarreraActor1->Destroy();
				}
				if (CrearBarreraActor2 && CrearBarreraActor2->IsValidLowLevel())
				{
					CrearBarreraActor2->Destroy();
				}
				if (CrearBarreraActor3 && CrearBarreraActor3->IsValidLowLevel())
				{
					CrearBarreraActor3->Destroy();
				}
			});

		// Destruccion del actor despues de 5 segundos de aparecer
		GetWorld()->GetTimerManager().SetTimer(DestruirBarrera, TimerDel, 5.0f, false);
	}
	bCrearBarr = false;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_CrearBarrera, this, &AGalaga_USFX_L01Pawn::ResetCrearBarrera, 10.0f, false);
}

void AGalaga_USFX_L01Pawn::ResetCrearBarrera()
{
	bCrearBarr = true;
}
void AGalaga_USFX_L01Pawn::devolverAlPrincipio()
{
	movimiento = true;
	velNave = 2000.0f;
	velNaveX = 2000.0f;
	velNaveY = 2000.0f;
}
void AGalaga_USFX_L01Pawn::soltarBomba()
{
	if (!soltBomb)
	{
		return;
	}
	FVector Location = GetActorLocation();
	FRotator Rotation = GetActorRotation();


	ABomba* SoltarBombaActor = GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass(), Location, Rotation);

	if (SoltarBombaActor != nullptr)
	{
		SoltarBombaActor->SetActorLocation(Location+FVector(0.0f,0.0f,0.0f));
		SoltarBombaActor->SetActorRotation(Rotation);

		FTimerDelegate Timer;
		Timer.BindLambda([SoltarBombaActor]()
			{
				if (SoltarBombaActor && SoltarBombaActor->IsValidLowLevel())
				{
					SoltarBombaActor->Destroy();
				}
			});
		GetWorld()->GetTimerManager().SetTimer(DetonarBomba, Timer, 5.0f, false);
	}
	soltBomb = false;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_SoltarBomba, this, &AGalaga_USFX_L01Pawn::ResetSoltarBomba, 10.0f, false);

}

void AGalaga_USFX_L01Pawn::ResetSoltarBomba()
{
	soltBomb = true;
}

void AGalaga_USFX_L01Pawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	bool masVelocidad = false;

	{
		AGalaga_USFX_L01GameMode* GameMode = Cast<AGalaga_USFX_L01GameMode>(GetWorld()->GetAuthGameMode());
		if (GameMode != nullptr)
		{
			masVelocidad = GameMode->GetPowerUpStatus(500);
		}
	}

	if (masVelocidad)
	{
		MoveSpeed = 2000.0f;
	}

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}

	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);

	//const float Gravedad = -9.8f;  // Ajusta este valor seg�n sea necesario
	//const FVector FuerzaGravedad = FVector(0.0f, 0.0f, Gravedad);
	//ShipMeshComponent->AddForce(FuerzaGravedad);

	if (movimiento)
	{
		FVector PosicionActual = GetActorLocation();
		if (GetActorLocation().X > UbicacionInicioX + 20 || GetActorLocation().X < UbicacionInicioX - 20)
		{
			if (GetActorLocation().Y > UbicacionInicioY + 20 || GetActorLocation().Y < UbicacionInicioY - 20)
			{
				FVector Direccion = (PosicionInicio - PosicionActual).GetSafeNormal();
				FVector NuevaPosicion = PosicionActual + Direccion * 2000.0f * DeltaSeconds;
				SetActorLocation(NuevaPosicion);

			}
			else
			{
				movimiento = false;
			}
		}


	}
}


void AGalaga_USFX_L01Pawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
			//const FVector SpawnLocation2 = GetActorLocation() + FireRotation.RotateVector(GunOffset2);
			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AGalaga_USFX_L01Projectile>(SpawnLocation, FireRotation);

			}
			//bool disparodoble = false;
			//{
				//AGalaga_USFX_L01GameMode* GameMode = Cast<AGalaga_USFX_L01GameMode>(GetWorld()->GetAuthGameMode());
				//if (GameMode != nullptr)
				//{
					//disparodoble = GameMode->GetPowerUpStatus(200);
				//}
			//}

			if (disparoDoble)
			{
				const FVector SpawnLocation2 = GetActorLocation() + FireRotation.RotateVector(GunOffset2);
				if (World != nullptr)
				{
					World->SpawnActor<AGalaga_USFX_L01Projectile>(SpawnLocation2, FireRotation);
				}
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGalaga_USFX_L01Pawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}

void AGalaga_USFX_L01Pawn::ActivarDobleDisparo()
{
	disparoDoble = !disparoDoble;
}

void AGalaga_USFX_L01Pawn::ShotTimerExpired()
{
	bCanFire = true;
}