// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilEnemigo_6.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Galaga_USFX_L01Pawn.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AProyectilEnemigo_6::AProyectilEnemigo_6()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/BulletEnemyLevel1.BulletEnemyLevel1'"));
	/*StaticMesh'/Game/Meshes/BulletLevel2.BulletLevel2'*/
	MallaDeProyectil_6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	MallaDeProyectil_6->SetStaticMesh(ProjectileMeshAsset.Object);
	MallaDeProyectil_6->SetupAttachment(RootComponent);
	vel = 1000;

}

// Called when the game starts or when spawned
void AProyectilEnemigo_6::BeginPlay()
{
	Super::BeginPlay();
	Posicionpawn = Cast<AGalaga_USFX_L01Pawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}

// Called every frame
void AProyectilEnemigo_6::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AProyectilEnemigo_6::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalaga_USFX_L01Pawn* Jugador = Cast<AGalaga_USFX_L01Pawn>(Other);
	if (Jugador) {
		Destroy();
		Jugador->ModificarVida("Disminuir", 1);
	}
}

void AProyectilEnemigo_6::Mover(float DeltaTime)
{
	FVector Ubicacion = GetActorLocation();
	_PosicionPawn = Posicionpawn->GetActorLocation();
	FVector Direccion = (_PosicionPawn - Ubicacion).GetSafeNormal();
	FVector NewPos = Ubicacion + Direccion * vel * DeltaTime;
	SetActorLocation(NewPos);
}

