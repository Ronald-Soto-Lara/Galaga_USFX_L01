// Fill out your copyright notice in the Description page of Project Settings.


#include "NavesCucarachas.h"

// Sets default values
ANavesCucarachas::ANavesCucarachas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshCucarachas = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveCucaracha"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveCucarachaAsset(TEXT("StaticMesh'/Game/Meshes/Food.Food'"));
	MeshCucarachas->SetStaticMesh(NaveCucarachaAsset.Object);
}

// Called when the game starts or when spawned
void ANavesCucarachas::BeginPlay()
{
	Super::BeginPlay();	
	OrdenarNavesCucarachas();
}

// Called every frame
void ANavesCucarachas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANavesCucarachas::OrdenarNavesCucarachas()
{/*
	UWorld* const World = GetWorld();
	if (World != nullptr) {
	ANavesCucarachas* NaveCucaracha1 = World()->SpawnActor<ANavesCucarachas>(FVector(100.0f,0.0f,0.0f), FRotator::ZeroRotator);
	}*/
	/*NaveCucaracha = GetWorld()->SpawnActor<ANavesCucarachas>(FVector(100.0f,0.0f,0.0f), FRotator::ZeroRotator);*/
}

