// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAlatoriaAerea.h"

// Sets default values
ANaveAlatoriaAerea::ANaveAlatoriaAerea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MallaNaveAerea = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaNaveAerea"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> 
	NaveAereaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));	
	MallaNaveAerea->SetStaticMesh(NaveAereaMesh.Object);

}

// Called when the game starts or when spawned
void ANaveAlatoriaAerea::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveAlatoriaAerea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

