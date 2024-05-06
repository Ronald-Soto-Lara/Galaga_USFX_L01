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
#include "NaveAleatoriaAcuatica.h"
#include "NaveAlatoriaAerea.h"
#include "NaveAleatoriaTerrestre.h"
#include "GrupoNavesBuilder.h"
#include "Director_NJ.h"
#include "NaveJefe_Nivel_1.h"
#include "NaveJefe_Nivel_2.h"
#include "EscuadronApoyo.h"
#include "Components/SceneComponent.h"
#include "EscudoEscena.h"
#include "TimerManager.h"


AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;
	naves = true;
	
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//set the game satate to playing
	FVector ubicacionInicioNavesEnemigasCaza = FVector(-500.0f, -500.0f, 150.0f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(0.0f, 0.0f, 150.0f);
	FVector ubicacionInicioNavesEnemigasReabastecimiento = FVector(500.0f, 500.0f, 150.0f);
	FVector NaveAleatoriaAcuaticaUbicacion = FVector(-1000.0f, 0.0f, 150.0f);
	FVector NaveAleatoriaAereaUbicacion = FVector(-1200.0f, 0.0f, 700.0f);
	FVector NaveAleatoriaTerrestreUbicacion = FVector(-1400.0f, 0.0f, 150.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	int a = 350;
	int b = -450;
	int c = 0;
	if (World != nullptr)
	{
			FTimerDelegate TimerDel;
				int32 RandomNumber = FMath::RandRange(0, 2);
				if (RandomNumber == 0)
				{
					ANaveAleatoriaAcuatica* NaveAleatoriaAcuaticaTemp = World->SpawnActor<ANaveAleatoriaAcuatica>(NaveAleatoriaAcuaticaUbicacion, rotacionNave);
					TimerDel.BindLambda([NaveAleatoriaAcuaticaTemp]()
						{
							if (NaveAleatoriaAcuaticaTemp && NaveAleatoriaAcuaticaTemp->IsValidLowLevel())
							{
								NaveAleatoriaAcuaticaTemp->Destroy();
							}
						});
					GetWorld()->GetTimerManager().SetTimer(EliminarNaveAcuatica, TimerDel, 10.0f, false);
				}
				else if (RandomNumber == 1)
				{
					ANaveAlatoriaAerea* NaveAleatoriaAereaTemp = World->SpawnActor<ANaveAlatoriaAerea>(NaveAleatoriaAereaUbicacion, rotacionNave);
					TimerDel.BindLambda([NaveAleatoriaAereaTemp]()
						{
							if (NaveAleatoriaAereaTemp && NaveAleatoriaAereaTemp->IsValidLowLevel())
							{
								NaveAleatoriaAereaTemp->Destroy();
							}
						});
					GetWorld()->GetTimerManager().SetTimer(EliminarNaveAerea, TimerDel, 10.0f, false);
				}
				else if (RandomNumber == 2)
				{
					ANaveAleatoriaTerrestre* NaveAleatoriaTerrestreTemp = World->SpawnActor<ANaveAleatoriaTerrestre>(NaveAleatoriaTerrestreUbicacion, rotacionNave);
					TimerDel.BindLambda([NaveAleatoriaTerrestreTemp]()
						{
							if (NaveAleatoriaTerrestreTemp && NaveAleatoriaTerrestreTemp->IsValidLowLevel())
							{
								NaveAleatoriaTerrestreTemp->Destroy();
							}
						});
					GetWorld()->GetTimerManager().SetTimer(EliminarNaveTerrestre, TimerDel, 10.0f, false);
				}

		/*TArray<TSubclassOf<ANaveEnemiga>> claseNave = {
		ANaveCaza_1::StaticClass(), ANaveCaza_2::StaticClass(),
		ANaveEspia_1::StaticClass(),ANaveEspia_2::StaticClass(),
		ANaveNodriza_1::StaticClass(),ANaveNodriza_2::StaticClass(),
		ANaveReab_1::StaticClass(),ANaveReab_2::StaticClass(),
		ANaveTransporte_1::StaticClass(),ANaveTransporte_2::StaticClass() };

		FVector InicialSpawnLocation = FVector(-350.f, -450.f, 150.f);

		for (int i = 0; i < 30; i++)
		{
				TSubclassOf<ANaveEnemiga> ClaseRandom = claseNave[FMath::RandRange(0, claseNave.Num() - 1)];
				FVector SpawnLocation = InicialSpawnLocation + FVector(a, b, 0.f);
				FRotator SpawnRotation = FRotator::ZeroRotator;
				ANaveEnemiga* NuevaNaveSpawn = GetWorld()->SpawnActor<ANaveEnemiga>(ClaseRandom, SpawnLocation, SpawnRotation);
				b = b + 300;
				c = c + 1;
			if (c == 6) {
				c = 0;
				a = a+300;
				b = -450;
			}
		}*/
				/*Director_nj = World->SpawnActor<ADirector_NJ>();
				ANaveJefe_Nivel_1* va = World->SpawnActor<ANaveJefe_Nivel_1>();
				ANaveJefe_Nivel_2* ve = World->SpawnActor<ANaveJefe_Nivel_2>();
				AEscuadronApoyo* j = Director_nj->getEscAPoyoooooo(va);
				AEscuadronApoyo* k = Director_nj->getEscAPoyoooooo(ve);*/
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
	FVector ubiNaveEje = FVector(0.0f, 0.0f, 150.0f);
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
			if (naves)
			{
				ActTiempo();
				naves = false;
			}
	}
}
int x = 0;
void AGalaga_USFX_L01GameMode::CrearNaves() 
{
	naves = false;
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		FVector NaveAleatoriaAcuaticaUbicacion = FVector(-1000.0f, 0.0f, 150.0f);
		FVector NaveAleatoriaAereaUbicacion = FVector(-1200.0f, 0.0f, 700.0f);
		FVector NaveAleatoriaTerrestreUbicacion = FVector(-1400.0f, 0.0f, 150.0f);

		FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
		if (x < 3) {
			FTimerDelegate TimerDel;
			int32 RandomNumber = FMath::RandRange(1, 3);
			if (RandomNumber == 1)
			{
				ANaveAleatoriaAcuatica* NaveAleatoriaAcuaticaTemp = World->SpawnActor<ANaveAleatoriaAcuatica>(NaveAleatoriaAcuaticaUbicacion, rotacionNave);
				TimerDel.BindLambda([NaveAleatoriaAcuaticaTemp]()
					{
						if (NaveAleatoriaAcuaticaTemp && NaveAleatoriaAcuaticaTemp->IsValidLowLevel())
						{
							NaveAleatoriaAcuaticaTemp->Destroy();
						}
					});
				GetWorld()->GetTimerManager().SetTimer(EliminarNaveAcuatica, TimerDel, 10.0f, false);
				naves = true;
				x++;
			}
			else if (RandomNumber == 2)
			{
				ANaveAlatoriaAerea* NaveAleatoriaAereaTemp = World->SpawnActor<ANaveAlatoriaAerea>(NaveAleatoriaAereaUbicacion, rotacionNave);
				TimerDel.BindLambda([NaveAleatoriaAereaTemp]()
					{
						if (NaveAleatoriaAereaTemp && NaveAleatoriaAereaTemp->IsValidLowLevel())
						{
							NaveAleatoriaAereaTemp->Destroy();
						}
					});
				GetWorld()->GetTimerManager().SetTimer(EliminarNaveAerea, TimerDel, 10.0f, false);
				naves = true;
				x++;
			}
			else if (RandomNumber == 3)
			{
				ANaveAleatoriaTerrestre* NaveAleatoriaTerrestreTemp = World->SpawnActor<ANaveAleatoriaTerrestre>(NaveAleatoriaTerrestreUbicacion, rotacionNave);
				TimerDel.BindLambda([NaveAleatoriaTerrestreTemp]()
					{
						if (NaveAleatoriaTerrestreTemp && NaveAleatoriaTerrestreTemp->IsValidLowLevel())
						{
							NaveAleatoriaTerrestreTemp->Destroy();
						}
					});
				GetWorld()->GetTimerManager().SetTimer(EliminarNaveTerrestre, TimerDel, 10.0f, false);
				naves = true;
				x++;
			}
		}
		FTimerDelegate TimerDel;
		int32 RandomNumber = FMath::RandRange(1,2);
		Director_nj = World->SpawnActor<ADirector_NJ>();
		if (RandomNumber == 1)
		{
			ANaveJefe_Nivel_1* va = World->SpawnActor<ANaveJefe_Nivel_1>();
			AEscuadronApoyo* j = Director_nj->getEscAPoyoooooo(va);
			TimerDel.BindLambda([va]()
				{
					if (va && va->IsValidLowLevel())
					{
						va->Destroy();
					}
				});
			GetWorld()->GetTimerManager().SetTimer(EliminarNaveAerea, TimerDel, 10.0f, false);
			naves = true;
			x++;
		}
		if (RandomNumber == 2)
		{
			ANaveJefe_Nivel_2* ve = World->SpawnActor<ANaveJefe_Nivel_2>();
			AEscuadronApoyo* k = Director_nj->getEscAPoyoooooo(ve);
		}
		}
}
void AGalaga_USFX_L01GameMode::ActTiempo() {
	FTimerHandle TimerDel1;
	GetWorldTimerManager().SetTimer(TimerDel1, this, &AGalaga_USFX_L01GameMode::CrearNaves, 11.0f, false);
	//naves = true;
}
