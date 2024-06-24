// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h" 

class ANaveEnemiga;
class ANaveTransporte;
class ANaveCaza;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();
protected:
	//Called when the game starts or when spawned
	virtual void BeginPlay() override;
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


	//Punteros del patron bridge
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ACapsula* Capsula;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AImplementationConcrect* Bridge1;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AImplementationConcrect_1* Bridge2;


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
	int RECORD;
	int POWER_UP_DOUBLE_SHOT_ID;
	FString powerUp;
	TMap<int, FString>TMapPowerUp;
	float TimeDay;	
	int na;
	FORCEINLINE bool GetPowerUpStatus(int PowerUpID) const
	{
		const bool* Status = PowerUpStatusMap.Find(PowerUpID);
		return (Status != nullptr) ? *Status : false;
	}
	class AEstadoLento* EstadoLento;
	class AEstadoInvisible* EstadoInvisible;
	class AEstadoBase* EstadoBase;
};