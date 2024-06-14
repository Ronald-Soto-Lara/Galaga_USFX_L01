// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterfazCommand.h"
#include "ComandoDeSalto.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AComandoDeSalto : public AActor, public IInterfazCommand
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AComandoDeSalto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Ejecutar() override;
	virtual void Deshacer() override;

private:

	class AReceptorDeOrdenes* Orden;
	bool Salto;
};
