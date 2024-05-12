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
class ANaveJefe_Nivel_1;
class ANaveJefe_Nivel_2;
class ANaveJefe_Nivel_3;
class ADirector_NJ;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();
public:
	ANaveReab_2* NaveEnemigaReabastecimientoG201;
protected:
	//Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void CrearNaves();
	virtual void ActTiempo();
	FTimerHandle EliminarNaveAcuatica;
	FTimerHandle EliminarNaveAerea;
	FTimerHandle EliminarNaveTerrestre;
	bool naves;
public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveCaza*> TANavesEnemigasCaza;
	TArray<ANaveTransporte*> TANavesEnemigasTransporte;
	ANaveJefe_Nivel_1* Jefe;
	ANaveJefe_Nivel_2* Jefe_2;
	ANaveJefe_Nivel_3* Jefe_3;
	ADirector_NJ* Director;
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