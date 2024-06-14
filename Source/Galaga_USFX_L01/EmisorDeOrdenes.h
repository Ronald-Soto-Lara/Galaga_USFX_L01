// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EmisorDeOrdenes.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEmisorDeOrdenes : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEmisorDeOrdenes();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void EstablecerOrden(class AActor* _orden);
	virtual void EjecutarOrden();
	virtual void DeshacerOrden();

private:
	IInterfazCommand* comando;

};
