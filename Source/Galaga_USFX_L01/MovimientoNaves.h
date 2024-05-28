//Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovimientoNaves.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GALAGA_USFX_L01_API UMovimientoNaves : public UActorComponent
{
	GENERATED_BODY()

public:
	UMovimientoNaves();
	UPROPERTY(EditAnywhere)
	float velocidad;
	bool movimiento;
protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};