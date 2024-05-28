// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaEstate.h"

// Sets default values
ACapsulaEstate::ACapsulaEstate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Speed.Speed'"));
	ProyecEnemy1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProyecEnemy1->SetStaticMesh(ProjectileMeshAsset.Object);
	ProyecEnemy1->SetupAttachment(RootComponent);
	ProyecEnemy1->SetWorldScale3D(FVector(5.0f, 5.0f, 5.0f));
}

// Called when the game starts or when spawned
void ACapsulaEstate::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsulaEstate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

