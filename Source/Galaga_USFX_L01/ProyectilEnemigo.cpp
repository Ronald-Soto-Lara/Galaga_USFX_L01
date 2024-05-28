// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilEnemigo.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

// Sets default values
AProyectilEnemigo::AProyectilEnemigo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Missile.Missile'"));

	ProyecEnemy = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProyecEnemy->SetStaticMesh(ProjectileMeshAsset.Object);
	ProyecEnemy->SetupAttachment(RootComponent);

	vel = 1000;
}
void AProyectilEnemigo::Mover()
{
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * vel * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}
// Called when the game starts or when spawned
void AProyectilEnemigo::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AProyectilEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover();

}

