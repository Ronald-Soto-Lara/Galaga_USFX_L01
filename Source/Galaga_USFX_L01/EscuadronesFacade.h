// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "EscuadronesFacade.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEscuadronesFacade : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEscuadronesFacade();
	TArray <ANaveEnemiga*> Enemigos;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void CrearEscuadrones(int tipo);
	void CrearEsc_1();
	void CrearEsc_2();
	void CrearEsc_3();
	void CrearEsc_4();
	void CrearEsc_5();

};