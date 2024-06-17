// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NaveJefeBuilder.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstruirNaveJefe.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AConstruirNaveJefe : public AActor,public INaveJefeBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConstruirNaveJefe();
	int J;
	class ANaveCaza* Base;
	class ANaveCaza_1* SegundoPiso;
	class ANaveCaza_2* Tiradores;
	class ANaveEspia* Cabeza;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void ImplementarBase(int w) override;
	void ImplementarSegundoPiso(int x) override;
	void ImplementarTiradores(int y) override;
	void ImplementarCantBalas(int z) override;
};
