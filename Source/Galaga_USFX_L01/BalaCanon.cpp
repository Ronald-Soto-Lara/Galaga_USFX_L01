// Fill out your copyright notice in the Description page of Project Settings.


#include "BalaCanon.h"

// Sets default values
ABalaCanon::ABalaCanon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MallaBala = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BalaMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	MallaBala->SetStaticMesh(Mesh.Object);
}

// Called when the game starts or when spawned
void ABalaCanon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABalaCanon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}