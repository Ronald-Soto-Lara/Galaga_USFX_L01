// Copyright Epic Games, Inc. All Rights Reserve

#include "Galaga_USFX_L01Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "NaveReabastecimiento.h"
#include "NaveEspia.h"
#include "NaveTransporte.h"
#include "NaveCaza.h"
#include "NaveNodriza.h"
#include "Engine/Engine.h"
#include "Galaga_USFX_L01Pawn.h"
#include "EscuadronesFacade.h"
#include "Director_NJ.h"
#include "Proteccion.h"
#include "ConstruirNaveJefe.h"
#include "NaveJefe_Nivel_1.h"
#include "NaveJefe_Nivel_2.h"
#include "NaveJefe_Nivel_3.h"
#include "NaveEspia_1.h"
#include "NaveEspia_2.h"
#include "NaveCaza_1.h"
#include "NaveCaza_2.h"
#include "EstadoInvencible.h"
#include "Capsulas.h"
#include "Bomba.h"
#include "ClaseExtra.h"
#include "aaConcrectObserver.h"
#include "Escolta.h"


AGalaga_USFX_L01Projectile::AGalaga_USFX_L01Projectile() 
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/BulletLevel1.BulletLevel1'"));
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AGalaga_USFX_L01Projectile::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;
	ProjectileMesh->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 1000.f;
	ProjectileMovement->MaxSpeed = 7000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}
int n = 0;
int EscDestruidas = 0;
int ObserverContador = 0;

void AGalaga_USFX_L01Projectile::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	ANaveReabastecimiento* NaveReabastecimiento = Cast<ANaveReabastecimiento>(Other);
	ANaveEspia* NaveEspiaCol = Cast<ANaveEspia>(Other);
	ANaveTransporte* NaveTransCol = Cast<ANaveTransporte>(Other);
	ANaveCaza* NaveCaza = Cast<ANaveCaza>(Other);
	ANaveNodriza* NaveNodriza = Cast<ANaveNodriza>(Other);
	ACapsulas* Capsulas = Cast<ACapsulas>(Other);
	ABomba* Bomba = Cast<ABomba>(Other);
	AClaseExtra* ClaseExtra = Cast<AClaseExtra>(Other);
	AProteccion* Proteccion = Cast<AProteccion>(Other);
	AaaConcrectObserver* Observer = Cast<AaaConcrectObserver>(Other);
	AEscolta* Escolta = Cast<AEscolta>(Other);
	if (Escolta!=nullptr) {
		Escolta->Destroy();
	}
	if (Observer != nullptr) {
		GEngine-> AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("se disparo al observer"));
		ObserverContador++;
		if (ObserverContador == 10) {
		Observer->Destroy();
		}
	}
	if (Proteccion) {
		Proteccion->DecrementarVida(5);
	}

	if (EscDestruidas == 5) {
		EstadoInvencible = GetWorld()->SpawnActor<AEstadoInvencible>(AEstadoInvencible::StaticClass());
		EstadoInvencible->PawnInvencible();
	}
	if (EscDestruidas == 10) {
		Jefe = GetWorld()->SpawnActor<ANaveJefe_Nivel_1>(ANaveJefe_Nivel_1::StaticClass());
		Director = GetWorld()->SpawnActor<ADirector_NJ>(ADirector_NJ::StaticClass());
		Director->ConstruirBaseJefe(Jefe);
		Director->ConstruirSegundoPisoJefe();
		Jefe = GetWorld()->SpawnActor<ANaveJefe_Nivel_1>(ANaveJefe_Nivel_1::StaticClass());
		Director = GetWorld()->SpawnActor<ADirector_NJ>(ADirector_NJ::StaticClass());
		Director->ConstruirBaseJefe(Jefe);
		Director->ConstruirSegundoPisoJefe();
		Jefe_2 = GetWorld()->SpawnActor<ANaveJefe_Nivel_2>(ANaveJefe_Nivel_2::StaticClass());
		Director->ConstruirBaseJefe(Jefe_2);
		Director->ConstruirTiradoresJefe();
		Jefe_3 = GetWorld()->SpawnActor<ANaveJefe_Nivel_3>(ANaveJefe_Nivel_3::StaticClass());
		Director->ConstruirBaseJefe(Jefe_3);
		Director->ConstruirCantBalasJefe();
	}
	if (Capsulas) {
		Capsulas->Destroy();
	}
	if (Bomba) {
		Bomba->Destroy();
	}
	if (ClaseExtra) {
		ClaseExtra->Destroy();
	}
		if (NaveReabastecimiento != nullptr) {
			NaveReabastecimiento->Destroy();
			n += 1;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Naves Reabastecimiento destruidas: %d"), n));
			if (n == 9) {
				n = 0;
				EscDestruidas += 1;
				if (EscDestruidas < 10) {
					int32 EjecutarNave = FMath::RandRange(1, 5);
					Naves = GetWorld()->SpawnActor<AEscuadronesFacade>(AEscuadronesFacade::StaticClass());
					Naves->CrearEscuadrones(EjecutarNave);
				}
			}
		}
		if (NaveEspiaCol != nullptr) {
			NaveEspiaCol->Destroy();
			n += 1;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Naves Espia destruidas: %d"), n));
			if (n == 9) {
				n = 0;
				EscDestruidas += 1;
				if (EscDestruidas < 10) {
					int32 EjecutarNave = FMath::RandRange(1, 5);
					Naves = GetWorld()->SpawnActor<AEscuadronesFacade>(AEscuadronesFacade::StaticClass());
					Naves->CrearEscuadrones(EjecutarNave);
				}
			}
		}
		if (NaveTransCol != nullptr) {
			NaveTransCol->Destroy();
			n += 1;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("Naves Transporte destruidas: %d"), n));
			if (n == 9) {
				n = 0;
				EscDestruidas += 1;
				if (EscDestruidas < 10) {
					int32 EjecutarNave = FMath::RandRange(1, 5);
					Naves = GetWorld()->SpawnActor<AEscuadronesFacade>(AEscuadronesFacade::StaticClass());
					Naves->CrearEscuadrones(EjecutarNave);
				}
			}
		}
		if (NaveCaza != nullptr) {
			NaveCaza->Destroy();
			n += 1;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, FString::Printf(TEXT("Naves Caza destruidas: %d"), n));
			if (n == 9) {
				n = 0;
				EscDestruidas += 1;
				if (EscDestruidas < 10) {
					int32 EjecutarNave = FMath::RandRange(1, 5);
					Naves = GetWorld()->SpawnActor<AEscuadronesFacade>(AEscuadronesFacade::StaticClass());
					Naves->CrearEscuadrones(EjecutarNave);
				}
			}
		}
		if (NaveNodriza != nullptr) {
			NaveNodriza->Destroy();
			n += 1;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, FString::Printf(TEXT("Naves Nodriza destruidas: %d"), n));
			if (n == 9) {
				n = 0;
				EscDestruidas += 1;
				if (EscDestruidas < 10) {
					int32 EjecutarNave = FMath::RandRange(1, 5);
					Naves = GetWorld()->SpawnActor<AEscuadronesFacade>(AEscuadronesFacade::StaticClass());
					Naves->CrearEscuadrones(EjecutarNave);
				}
			}
		}
}

void AGalaga_USFX_L01Projectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();
}