// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEspia.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEspia : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	bool invisibilidad;
	float tiempo_invisibilidad;
public:
	ANaveEspia();
	FORCEINLINE bool GetInvisibilidad() const { return invisibilidad; }
	FORCEINLINE float GetTiempo_Invisibilidad() const { return tiempo_invisibilidad; }

	FORCEINLINE void SetInvisibilidad(bool _Invisibilidad) { invisibilidad = _Invisibilidad; }
	FORCEINLINE void SetTiempo_Invisibilidad(float _tiempo_invisibilidad) { tiempo_invisibilidad = _tiempo_invisibilidad; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Vida();
	virtual void Ataque();
	virtual void Ocultar();
public:
	virtual void Tick(float DeltaTime) override;
};