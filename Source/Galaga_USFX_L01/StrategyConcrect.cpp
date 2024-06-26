// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyConcrect.h"
#include "ProyectilEnemigo.h"
#include "NaveEstrategy.h"

// Sets default values
AStrategyConcrect::AStrategyConcrect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ActDisparo = true;
	cadencia = 1.0f;
	naveRecord = 0;
	velocidad= 1.0f;
}

// Called when the game starts or when spawned
void AStrategyConcrect::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrategyConcrect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	naveRecord += 2;
	if (naveRecord>=100)
	{
		Disparar();
	}
}

void AStrategyConcrect::Disparar()
{
	AProyectilEnemigo* NewProj = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1200.0f,-250.0f,150.0f), FRotator::ZeroRotator);
	AProyectilEnemigo* NewProj1 = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1200.0f, -250.0f, 150.0f), FRotator(0.0f, 90.0f, 0.0f));
	AProyectilEnemigo* NewProj2 = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1200.0f, -250.0f, 150.0f), FRotator(180.0f, 0.0f, 0.0f));
	AProyectilEnemigo* NewProj3 = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1200.0f, -250.0f, 150.0f), FRotator(0.0f, 270.0f, 0.0f));
	AProyectilEnemigo* NewProj4 = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1200.0f, -250.0f, 150.0f), FRotator(0.0f, 45.0f, 0.0f));
	AProyectilEnemigo* NewProj5 = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1200.0f, -250.0f, 150.0f), FRotator(0.0f, 135.0f, 0.0f));
	AProyectilEnemigo* NewProj6 = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1200.0f, -250.0f, 150.0f), FRotator(0.0f, 225.0f, 0.0f));
	AProyectilEnemigo* NewProj7 = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1200.0f, -250.0f, 150.0f), FRotator(0.0f, 315.0f, 0.0f));
}