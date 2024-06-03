// Fill out your copyright notice in the Description page of Project Settings.


#include "ClaseExtra.h"

// Sets default values
AClaseExtra::AClaseExtra()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mallaClaseExtra = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaClaseExtra"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Speed.Speed'"));
	mallaClaseExtra->SetStaticMesh(ShipMesh.Object);
	mallaClaseExtra->SetWorldScale3D(FVector(5.0f, 5.0f, 5.0f));
}

// Called when the game starts or when spawned
void AClaseExtra::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AClaseExtra::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

