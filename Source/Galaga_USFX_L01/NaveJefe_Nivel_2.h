// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GrupoNavesBuilder.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveJefe_Nivel_2.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveJefe_Nivel_2 : public AActor, public IGrupoNavesBuilder
{
	GENERATED_BODY()
		
public:	
	// Sets default values for this actor's properties
	ANaveJefe_Nivel_2();
	class AConstruirNaveJefe* naveJefe_2;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void BuilCrearBase(int j) override;
	void BuilCrearSegundoPiso(int k) override;
	void BuildTiradores(int l) override;
	void BuildCant_Balas(int m) override;
	class AConstruirNaveJefe* CrearNaveJefe() override;
};
