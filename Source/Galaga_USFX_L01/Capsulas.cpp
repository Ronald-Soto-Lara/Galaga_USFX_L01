// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsulas.h"

// Sets default values
ACapsulas::ACapsulas()
{	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/Meshes/Shapes/Shape_Sphere.Shape_Sphere'"));
	MallaDeLaCapsula = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaDeLaCapsula"));
	MallaDeLaCapsula->SetStaticMesh(CapsulaMesh.Object);
}

// Called when the game starts or when spawned
void ACapsulas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsulas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

