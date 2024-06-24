// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilEnemigo_2.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Galaga_USFX_L01Pawn.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

// Sets default values
AProyectilEnemigo_2::AProyectilEnemigo_2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Laser.Laser'"));
	ProyecEnemy = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProyecEnemy->SetStaticMesh(ProjectileMeshAsset.Object);
	ProyecEnemy->SetupAttachment(RootComponent);
	ProyecEnemy->SetWorldScale3D(FVector(1.5f, 1.5f, 1.f));
	vel = 1000;
	n = 10;

}

// Called when the game starts or when spawned
void AProyectilEnemigo_2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectilEnemigo_2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover();
}

void AProyectilEnemigo_2::Mover()
{
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * vel * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}
