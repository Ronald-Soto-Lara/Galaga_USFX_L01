// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h" 

class ANaveEnemiga;
class ANaveTransporte;
class ANaveTransporte_1;
class ANaveTransporte_2;
class ANaveCaza;
class ANaveCaza_1;
class ANaveCaza_2;
class ANaveEspia;
class ANaveEspia_1;
class ANaveEspia_2;
class ANaveNodriza;
class ANaveNodriza_1;
class ANaveNodriza_2;
class ANaveReabastecimiento;
class ANaveReab_1;
class ANaveReab_2;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();
public:
	ANaveEnemiga* NaveEnemiga01;
	ANaveTransporte* NaveEnemigaTransporte01;
	ANaveTransporte_1* NaveEnemigaTransporteG101;
	ANaveTransporte_2* NaveEnemigaTransporteG201;
	ANaveCaza* MyNaveEnemigaCaza01;
	ANaveCaza_1* MyNaveEnemigaCazaG101;
	ANaveCaza_2* MyNaveEnemigaCazaG201;
	ANaveEspia* NaveEnemigaEspia01;
	ANaveEspia_1* NaveEnemigaEspiaG101;
	ANaveEspia_2* NaveEnemigaEspiaG201;
	ANaveNodriza* NaveEnemigaNodriza01;;
	ANaveNodriza_1* NaveEnemigaNodrizaG101;
	ANaveNodriza_2* NaveEnemigaNodrizaG201;
	ANaveReabastecimiento* NaveEnemigaReabastecimiento01;
	ANaveReab_1* NaveEnemigaReabastecimientoG101;
	ANaveReab_2* NaveEnemigaReabastecimientoG201;
protected:
	//Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FTimerHandle EliminarNaveAcuatica;
	FTimerHandle EliminarNaveAerea;
	FTimerHandle EliminarNaveTerrestre;
public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveCaza*> TANavesEnemigasCaza;
	TArray<ANaveTransporte*> TANavesEnemigasTransporte;
private:
	int TiempoTranscurrido;

public:
	int score;
	int POWER_UP_DOUBLE_SHOT_ID;


public:
	virtual void Tick(float DeltaTime) override;

public:
	FString powerUp;
	TMap<int, FString>TMapPowerUp;

	FORCEINLINE bool GetPowerUpStatus(int PowerUpID) const
	{
		const bool* Status = PowerUpStatusMap.Find(PowerUpID);
		return (Status != nullptr) ? *Status : false;
	}

private:
	TMap<int, bool> PowerUpStatusMap;
};