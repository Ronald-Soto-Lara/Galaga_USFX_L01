// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GrupoNavesBuilder.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Director_NJ.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ADirector_NJ : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADirector_NJ();
	IGrupoNavesBuilder* Construccion;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	/*
	definir el orden de la creacion y asginar valores
	*/

public:
	void ConstruirBaseJefe(AActor* Jefe);
	void ConstruirSegundoPisoJefe();
	void ConstruirTiradoresJefe();
	void ConstruirCantBalasJefe();
	class AConstruirNaveJefe* ConstruirNaveJefe();
};
