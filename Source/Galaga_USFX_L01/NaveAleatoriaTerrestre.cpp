// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAleatoriaTerrestre.h"

// Sets default values
ANaveAleatoriaTerrestre::ANaveAleatoriaTerrestre()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MallaNaveTerrestre = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaNaveTerrestre"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>
	NaveTerrestreMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_180.Shape_Pipe_180'"));
	MallaNaveTerrestre->SetStaticMesh(NaveTerrestreMesh.Object);

}

// Called when the game starts or when spawned
void ANaveAleatoriaTerrestre::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveAleatoriaTerrestre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

