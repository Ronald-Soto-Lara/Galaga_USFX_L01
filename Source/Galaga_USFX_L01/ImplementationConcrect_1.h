// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Implemetation.h"
#include "ImplementationConcrect_1.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AImplementationConcrect_1 : public AActor, public IImplemetation
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AImplementationConcrect_1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	float TiempoCapsula;
	FString TipoPoder;
	bool VerificarCapsula;

public:
	virtual bool CapsulaConsumida(FString _consumida) override;
	virtual void HabilitarCapsula(float _tiempo) override;
	virtual bool DesHabilitarCapsula() override;
	virtual FString ObtenerTipoPoder() override;
	virtual void EstablecerTipoPoder(FString _Poder) override;
};
