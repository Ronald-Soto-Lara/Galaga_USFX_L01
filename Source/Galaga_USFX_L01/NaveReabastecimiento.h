// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveReabastecimiento.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	float capacidad_reabastecimiento;
	float velocidad_reabastecimiento;
	bool estado_reabastecimiento;
public:
	ANaveReabastecimiento();
	FORCEINLINE float GetCapacidad_reabastecimiento() const { return capacidad_reabastecimiento; }
	FORCEINLINE float GetVelocidad_reabastecimiento() const { return velocidad_reabastecimiento; }
	FORCEINLINE bool GetEstado_reabastecimiento() const { return estado_reabastecimiento; }

	FORCEINLINE void SetCapacidad_reabastecimiento(float _capacidad_reabastecimiento) { capacidad_reabastecimiento = _capacidad_reabastecimiento; }
	FORCEINLINE void SetVelocidad_reabastecimiento(float _velocidad_reabastecimiento) { velocidad_reabastecimiento = _velocidad_reabastecimiento; }
	FORCEINLINE void SetEstado_reabastecimiento(bool _estado_reabastecimiento) { estado_reabastecimiento = _estado_reabastecimiento; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Vida();
	virtual void Reabastecer();
public:
	virtual void Tick(float DeltaTime) override;
	virtual void Disparar();
	int recordReabastecimiento;
};