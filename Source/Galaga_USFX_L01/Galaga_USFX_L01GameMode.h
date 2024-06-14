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
	virtual void CrearEstate();
	int na;
protected:
	//Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void CrearNaves();
	virtual void ActTiempo();
	FTimerHandle EliminarNaveAcuatica;
	FTimerHandle EliminarNaveAerea;
	FTimerHandle EliminarNaveTerrestre;
	bool naves;
	class AEscuadronesFacade* Naves;
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ACalculator* calculadora;
	//COMMAND	PATTERN
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AEmisorDeOrdenes* Emisor;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AReceptorDeOrdenes* Receptor;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AComandoDeSalto* CSaltar;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AComandoDeDisparo* CDisparar;

	void EjecutarComandoSaltar();
	void EjecutarComandoDisparar();
	void DeshacerComando();

private:
	int TiempoTranscurrido;
	TMap<int, bool> PowerUpStatusMap;
	AActor* UltimaOrden;
	TArray<AActor*> Ordenes;
	FTimerHandle TimerHandle;
	float temp;

public:
	virtual void Tick(float DeltaTime) override;
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveCaza*> TANavesEnemigasCaza;
	TArray<ANaveTransporte*> TANavesEnemigasTransporte;
	ANaveJefe_Nivel_1* Jefe;
	ANaveJefe_Nivel_2* Jefe_2;
	ANaveJefe_Nivel_3* Jefe_3;
	ADirector_NJ* Director;
	int score;
	int POWER_UP_DOUBLE_SHOT_ID;
	FString powerUp;
	TMap<int, FString>TMapPowerUp;
	float TimeDay;		
	FORCEINLINE bool GetPowerUpStatus(int PowerUpID) const
	{
		const bool* Status = PowerUpStatusMap.Find(PowerUpID);
		return (Status != nullptr) ? *Status : false;
	}
};