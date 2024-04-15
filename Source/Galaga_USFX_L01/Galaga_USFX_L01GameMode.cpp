// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveTransporte.h"
#include "NaveTransporte_1.h"
#include "NaveTransporte_2.h"
#include "NaveCaza.h"
#include "NaveCaza_1.h"
#include "NaveCaza_2.h"
#include "NaveEspia.h"
#include "NaveEspia_1.h"
#include "NaveEspia_2.h"
#include "NaveNodriza.h"
#include "NaveNodriza_1.h"
#include "NaveNodriza_2.h"
#include "NaveReabastecimiento.h"
#include "NaveReab_1.h"
#include "NaveReab_2.h"
#include "Components/SceneComponent.h"
#include "EscudoEscena.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//set the game satate to playing
	FVector ubicacionInicioNavesEnemigasCaza = FVector(-500.0f, 500.0f, 200.0f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(500.0f, 500.0f, 200.0f);
	FVector ubicacionInicioNAvesEnemigasReabastecimiento = FVector(1000.0f, 500.0f, 200.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();


	if (World != nullptr)
	{
		TArray<TSubclassOf<ANaveEnemiga>> claseNave = {
		ANaveCaza_1::StaticClass(), ANaveCaza_2::StaticClass(),
		ANaveEspia_1::StaticClass(),ANaveEspia_2::StaticClass(),
		ANaveNodriza_1::StaticClass(),ANaveNodriza_2::StaticClass(),
		ANaveReab_1::StaticClass(),ANaveReab_2::StaticClass(),
		ANaveTransporte_1::StaticClass(),ANaveTransporte_2::StaticClass() };

		FVector InicialSpawnLocation = FVector(100.f, -500.f, 200.f);

		for (int i = 0; i < 30; i++)
		{
			TSubclassOf<ANaveEnemiga> ClaseRandom = claseNave[FMath::RandRange(0, claseNave.Num() - 1)];

			FVector SpawnLocation = InicialSpawnLocation + FVector(0.f, i * 80.f, 0.f);

			FRotator SpawnRotation = FRotator::ZeroRotator;
			ANaveEnemiga* NuevaNaveSpawn = GetWorld()->SpawnActor<ANaveEnemiga>(ClaseRandom, SpawnLocation, SpawnRotation);

			if (NuevaNaveSpawn) {}
		}
	}
	TMapPowerUp.Add(3000, "escudo");
	TMapPowerUp.Add(200, "doble tiro");
	TMapPowerUp.Add(1000, "vida extra");
	TMapPowerUp.Add(1500, "invulnerable");
	TMapPowerUp.Add(500, "velocidad");

	PowerUpStatusMap.Add(3000, false);
	PowerUpStatusMap.Add(200, false);
	PowerUpStatusMap.Add(1000, false);
	PowerUpStatusMap.Add(1500, false);
	PowerUpStatusMap.Add(500, false);
	score = 0;
}


void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;
	if (TiempoTranscurrido >= 100)
	{
		int numeroEnemigo = FMath::RandRange(0, 9);
		if (GEngine)
		{

		}
		score = score + 50;
		TiempoTranscurrido = 0;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("score: %d"), score));
	}
	for (const auto& par : TMapPowerUp)
	{
		int scoreMap = par.Key;
		FString PowerUp = par.Value;
		if (scoreMap == score)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("PowerUp: %s"), *PowerUp));
		}
		for (auto& par2 : PowerUpStatusMap)
		{
			int PowerUpScore = par2.Key;
			bool& bPowerUpStatus = par2.Value;

			if (score >= PowerUpScore && !bPowerUpStatus)
			{
				bPowerUpStatus = true;
				FString StatusMessage = FString::Printf(TEXT("PowerUp with score %d is now active: %s"), PowerUpScore, bPowerUpStatus ? TEXT("True") : TEXT("False"));
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, StatusMessage);
			}
		}

	}

}