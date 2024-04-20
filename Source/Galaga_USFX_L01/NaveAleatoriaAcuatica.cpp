// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAleatoriaAcuatica.h"

// Sets default values
ANaveAleatoriaAcuatica::ANaveAleatoriaAcuatica()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MallaNaveAcuatica = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaNaveAcuatica"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>
	NaveAcuaticaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MallaNaveAcuatica->SetStaticMesh(NaveAcuaticaMesh.Object);

}

// Called when the game starts or when spawned
void ANaveAleatoriaAcuatica::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveAleatoriaAcuatica::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

