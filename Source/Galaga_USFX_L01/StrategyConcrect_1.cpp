// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyConcrect_1.h"
#include "ProyectilEnemigo.h"
#include "NaveEstrategy.h"

// Sets default values
AStrategyConcrect_1::AStrategyConcrect_1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	cadencia = 1.0f;
}

// Called when the game starts or when spawned
void AStrategyConcrect_1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrategyConcrect_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	naveRecord += 2;
	if (naveRecord >=200)
	{
		Disparar();
	}
}

void AStrategyConcrect_1::Disparar()
{
	AProyectilEnemigo* NewProj0  = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1170.0f, 0.0f, 150.0f), FRotator::ZeroRotator);
	AProyectilEnemigo* NewProj01 = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1230.0f, 0.0f, 150.0f), FRotator::ZeroRotator);
	AProyectilEnemigo* NewProj1  = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1170.0f, 0.0f, 150.0f), FRotator(0.0f, 90.0f, 0.0f));
	AProyectilEnemigo* NewProj11 = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1230.0f, 30.0f, 150.0f), FRotator(0.0f,90.0f, 0.0f));
	AProyectilEnemigo* NewProj2  = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1170.0f, 30.0f, 150.0f), FRotator(180.0f, 0.0f, 0.0f));
	AProyectilEnemigo* NewProj21 = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1230.0f, 30.0f, 150.0f), FRotator(180.0f, 0.0f, 0.0f));
	AProyectilEnemigo* NewProj3  = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1170.0f, 30.0f, 150.0f), FRotator(0.0f, 270.0f, 0.0f));
	AProyectilEnemigo* NewProj31 = GetWorld()->SpawnActor<AProyectilEnemigo>(FVector(-1230.0f, 30.0f, 150.0f), FRotator(0.0f, 270.0f, 0.0f));
}

