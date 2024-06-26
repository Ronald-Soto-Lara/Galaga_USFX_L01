// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaVida.h"

// Sets default values
ACapsulaVida::ACapsulaVida()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/Meshes/Life.Life'"));
	MallaDeLaCapsulaVida = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaDeLaCapsulaVida"));
	MallaDeLaCapsulaVida->SetStaticMesh(CapsulaMesh.Object);
	MallaDeLaCapsulaVida->SetWorldScale3D(FVector(5.0f, 5.0f, 5.0f));

}

// Called when the game starts or when spawned
void ACapsulaVida::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsulaVida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

