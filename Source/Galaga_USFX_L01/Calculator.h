// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArmarObserver.h"
#include "Calculator.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ACalculator : public AArmarObserver
{
	GENERATED_BODY()
public:
	ACalculator();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float _DeltaTime) override;

private:
	FString Tiempo;

public:
	void CambioHora();
	void SetHora(FString _Hora);
	FORCEINLINE FString GetHora(); //Obtener datos ya sea con cambio en tiempo real
	//o datos estaticos

};
