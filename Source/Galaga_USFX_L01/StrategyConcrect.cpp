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
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("LISTOOOOOOOOOOOOOOOOOOOOO"));
	}
	if(naveRecord == 200)
	{
		strategyConcrect->Destroy();
	}
}

void AStrategyConcrect::TReset_Projectile()
{
	ActDisparo = true;
}

void AStrategyConcrect::Disparar()
{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Ejecutando tarea 0"));
		FVector SpawnPLocation = FVector(-400.0f, -200.0f, 0.0f);
		if (ActDisparo == true)
		{
			UWorld* World = GetWorld();
			if (World)
			{
				AProyectilEnemigo* NewProj = World->SpawnActor<AProyectilEnemigo>(SpawnPLocation + FVector(0.0f, 0.0f, 150.0f), FRotator::ZeroRotator);
				AProyectilEnemigo* NewProj1 = World->SpawnActor<AProyectilEnemigo>(SpawnPLocation + FVector(0.0f, 0.0f, 150.0f), FRotator(0.0f, 90.0f, 0.0f));
				AProyectilEnemigo* NewProj2 = World->SpawnActor<AProyectilEnemigo>(SpawnPLocation + FVector(0.0f, 0.0f, 150.0f), FRotator(180.0f, 0.0f, 0.0f));
				AProyectilEnemigo* NewProj3 = World->SpawnActor<AProyectilEnemigo>(SpawnPLocation + FVector(0.0f, 0.0f, 150.0f), FRotator(0.0f, 270.0f, 0.0f));
				AProyectilEnemigo* NewProj4 = World->SpawnActor<AProyectilEnemigo>(SpawnPLocation + FVector(0.0f, 0.0f, 150.0f), FRotator(0.0f, 45.0f, 0.0f));
				AProyectilEnemigo* NewProj5 = World->SpawnActor<AProyectilEnemigo>(SpawnPLocation + FVector(0.0f, 0.0f, 150.0f), FRotator(0.0f, 135.0f, 0.0f));
				AProyectilEnemigo* NewProj6 = World->SpawnActor<AProyectilEnemigo>(SpawnPLocation + FVector(0.0f, 0.0f, 150.0f), FRotator(0.0f, 225.0f, 0.0f));
				AProyectilEnemigo* NewProj7 = World->SpawnActor<AProyectilEnemigo>(SpawnPLocation + FVector(0.0f, 0.0f, 150.0f), FRotator(0.0f, 315.0f, 0.0f));
			}
			//Activa el temporizador para el siguiente disparo.
			World->GetTimerManager().SetTimer(Timer_fin, this, &AStrategyConcrect::TReset_Projectile, cadencia);
			//ActDisparo = false; //Desactiva el disparo para que no se dispare continuamente.
		}
}

