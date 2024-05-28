// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"

// Sets default values
ABomba::ABomba()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mallaBomba = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBomba"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	mallaBomba->SetStaticMesh(ShipMesh.Object);
	scored = 0;
}

// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	scored += 75;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Taller: %d"), scored));

}
