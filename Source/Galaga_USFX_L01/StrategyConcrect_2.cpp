// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyConcrect_2.h"
#include "ProyectilEnemigo.h"
#include "NaveEstrategy.h"

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
		EjecutarTarea();
	}
}

void AStrategyConcrect_2::TReset_Projectile()
{
	ActDisparo = true;
}

void AStrategyConcrect_2::EjecutarTarea()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Ejecutando tarea 2"));
	FVector SpawnPLocation = FVector(-400.0f, 200.0f, 0.0f);
	if (ActDisparo == true)
	{
		UWorld* World = GetWorld();
		if (World)
		{
			AProyectilEnemigo* NewProj0 = World->SpawnActor<AProyectilEnemigo>(FVector(-400.0f, 170.0f, 150.0f), FRotator::ZeroRotator);
			AProyectilEnemigo* NewProj = World->SpawnActor<AProyectilEnemigo>(SpawnPLocation + FVector(0.0f, 0.0f, 150.0f), FRotator::ZeroRotator);
			AProyectilEnemigo* NewProj1 = World->SpawnActor<AProyectilEnemigo>(FVector(-400.0f, 230.0f, 150.0f), FRotator::ZeroRotator);
		}
		//Activa el temporizador para el siguiente disparo.
		World->GetTimerManager().SetTimer(Timer_fin, this, &AStrategyConcrect_2::TReset_Projectile, cadencia);
		ActDisparo = false; //Desactiva el disparo para que no se dispare continuamente.
	}
}

