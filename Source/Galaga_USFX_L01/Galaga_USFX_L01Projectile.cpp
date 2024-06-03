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
#include "LetreroBienvenida.h"


AGalaga_USFX_L01Projectile::AGalaga_USFX_L01Projectile() 
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Projectile.Projectile'"));
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
	ProjectileMovement->InitialSpeed = 10000.f;
	ProjectileMovement->MaxSpeed = 7000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}
int n = 0;

void AGalaga_USFX_L01Projectile::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	ANaveReabastecimiento* NaveReabastecimiento = Cast<ANaveReabastecimiento>(Other);
	ANaveEspia* NaveEspiaCol = Cast<ANaveEspia>(Other);
	ANaveTransporte* NaveTransCol = Cast<ANaveTransporte>(Other);
	ANaveCaza* NaveCaza = Cast<ANaveCaza>(Other);
	ANaveNodriza* NaveNodriza = Cast<ANaveNodriza>(Other);

	if (NaveReabastecimiento != nullptr) {
		NaveReabastecimiento->Destroy();
		n += 1;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Naves Reabastecimiento destruidas: %d"), n));
		if (n == 25) {
		AGalaga_USFX_L01Pawn* GalagaPawn1 = Cast<AGalaga_USFX_L01Pawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if (GalagaPawn1)
			{	
				n = 0;
				GalagaPawn1->Destruir();
			}
		}
	}
	if (NaveEspiaCol != nullptr) {
		NaveEspiaCol->Destroy();
		n += 1;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Naves Espia destruidas: %d"), n));
		if (n == 25) {
			AGalaga_USFX_L01Pawn* GalagaPawn1 = Cast<AGalaga_USFX_L01Pawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if (GalagaPawn1)
			{
				n = 0;
				GalagaPawn1->Destroy();
			}
		}
	}
	if (NaveTransCol != nullptr) {
		NaveTransCol->Destroy();
		n += 1;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Naves Transporte destruidas: %d"), n));
		if (n== 25) {
			AGalaga_USFX_L01Pawn* GalagaPawn1 = Cast<AGalaga_USFX_L01Pawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if (GalagaPawn1)
			{
				n = 0;
				GalagaPawn1->Destroy();
			}
		}
	}
	if (NaveCaza != nullptr) {
		NaveCaza->Destroy();
		n += 1;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Naves Caza destruidas: %d"), n));
		if (n == 25) {
			AGalaga_USFX_L01Pawn* GalagaPawn1 = Cast<AGalaga_USFX_L01Pawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if (GalagaPawn1)
			{
				n = 0;
				GalagaPawn1->Destroy();
			}
		}
	}
	if (NaveNodriza != nullptr) {
		NaveNodriza->Destroy();
		n += 1;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Naves Nodriza destruidas: %d"), n));
		if (n == 25) {
			AGalaga_USFX_L01Pawn* GalagaPawn1 = Cast<AGalaga_USFX_L01Pawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if (GalagaPawn1)
			{
				n = 0;
				GalagaPawn1->Destroy();
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