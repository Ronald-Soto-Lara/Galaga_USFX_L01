// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveReabastecimiento.h"
#include "NaveReab_1.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveReab_1 : public ANaveReabastecimiento
{
	GENERATED_BODY()
private:
	float porcentaje_reab;
public:
	ANaveReab_1();
	FORCEINLINE float GetPorcentaje_reab() const { return porcentaje_reab; }

	FORCEINLINE void SetPorcentaje_reab(float _porcentaje_reab) { porcentaje_reab = _porcentaje_reab; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Vida();
	virtual void Reabastecer();
public:
	virtual void Tick(float DeltaTime) override;
};