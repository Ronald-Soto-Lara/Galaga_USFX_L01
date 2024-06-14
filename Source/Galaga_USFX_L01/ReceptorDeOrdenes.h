// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ReceptorDeOrdenes.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AReceptorDeOrdenes : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AReceptorDeOrdenes();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Disparar();
	virtual void Saltar();
	virtual void DeshacerOrden(FString _orden);

};
