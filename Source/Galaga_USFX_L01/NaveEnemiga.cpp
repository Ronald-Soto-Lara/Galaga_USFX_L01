// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"

// Iniciando una malla para la clase abstracta enemy.
ANaveEnemiga::ANaveEnemiga()
{
	PrimaryActorTick.bCanEverTick = true;
	//ComponenteMovimiento= CreatedefaultSuboject
    ComponenteMovimiento = CreateDefaultSubobject<UMovimientoNaves>(TEXT("ComponenteMovimiento"));
	EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	EnemyMesh->SetupAttachment(RootComponent);
	RootComponent = EnemyMesh;
	velocidad = 1.0f;
	cadencia = 1.0f;
	ActDisparo = true;
}

// Esta funcion se llama al comienzo del juego y es donde se colocan las inicializaciones y configuraciones iniciales del juego.
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();

}

void ANaveEnemiga::TReset_Proj()
{
	ActDisparo = true;
}

// Esta funcion permite comprobar cada frame el estado actual del objeto.
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}