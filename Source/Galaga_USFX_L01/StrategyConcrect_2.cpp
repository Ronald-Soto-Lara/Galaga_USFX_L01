// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyConcrect_2.h"
#include "ProyectilEnemigo.h"
#include "NaveEstrategy.h"
#include "FabricaDeProyectiles.h"

// Sets default values
AStrategyConcrect_2::AStrategyConcrect_2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ActDisparo = true;
	cadencia = 1.0f;
	naveRecord = 0;
}

// Called when the game starts or when spawned
void AStrategyConcrect_2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrategyConcrect_2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	naveRecord += 2;
	if (naveRecord >= 300)
	{
		Disparar();
	}
}

void AStrategyConcrect_2::TReset_Projectile()
{
	ActDisparo = true;
}

void AStrategyConcrect_2::Disparar()
{
	AProyectilEnemigo* NewProj0  = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1200.0f,250.0f,150.0f), FRotator(180.0f,0.0f,0.0f));
	AProyectilEnemigo* NewProj1  = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1200.0f, 250.0f, 150.0f)+FVector(0.0f,30.0f,0.0f), FRotator(180.0f, 0.0f, 0.0f));
	AProyectilEnemigo* NewProj2  = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1200.0f, 250.0f, 150.0f) + FVector(0.0f, -30.0f, 0.0f), FRotator(180.0f, 0.0f, 0.0f));
}

