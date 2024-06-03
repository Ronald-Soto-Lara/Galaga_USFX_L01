// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StrategyConcrect.h"
#include "StrategyConcrect_1.h"
#include "StrategyConcrect_2.h"
#include "NaveEstrategy.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveEstrategy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEstrategy();
	UStaticMeshComponent* MeshCompa;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void SetEstrategia(AActor* _Estrategia);
	void UsarEstrategia();

	void Estrategia___1();
	void Estrategia___2();
	void Estrategia___3();

	void TRest_Projectile();

	ANaveEstrategy* NaveEstrategy;
	ANaveEstrategy* NaveEstrategy_1;
	ANaveEstrategy* NaveEstrategy_2;

	class AStrategyConcrect* Estrategia_1;
	class AStrategyConcrect_1* Estrategia_2;
	class AStrategyConcrect_2* Estrategia_3;
	int recordNave;
protected:

private:
	class IEstrategy* Estrategia;
	/*class ANaveEstrategy* Estrategiana1;*/
};
