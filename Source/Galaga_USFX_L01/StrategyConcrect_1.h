// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estrategy.h"
#include "StrategyConcrect_1.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AStrategyConcrect_1 : public AActor, public IEstrategy
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AStrategyConcrect_1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void Disparar() override;
	virtual void TReset_Projectile();
	AStrategyConcrect* mano1;

protected:
	float ProjDist;
	bool ActDisparo;
	FVector GunOffset;
	FTimerHandle Timer_fin;
	float cadencia;
	int naveRecord;
};
