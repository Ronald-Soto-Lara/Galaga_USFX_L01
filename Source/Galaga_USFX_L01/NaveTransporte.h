// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveTransporte.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveTransporte : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	float capacidad;
	bool transportando;
	float tiempo_descarga;
public:
	ANaveTransporte();
	FORCEINLINE float GetCapacidad() const { return capacidad; }
	FORCEINLINE bool GetTransportando() const { return transportando; }
	FORCEINLINE float GetTiempo_descarga() const { return tiempo_descarga; }

	FORCEINLINE void SetCapacidad(float _capacidad) { capacidad = _capacidad; }
	FORCEINLINE void SetTransportando(bool _transportando) { transportando = _transportando; }
	FORCEINLINE void SetTiempo_descarga(float _tiempo_descarga) { tiempo_descarga = _tiempo_descarga; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Vida();
	virtual void Descargar();
public:
	virtual void Tick(float DeltaTime) override;
	virtual void Disparar();
	int recordCaza;
	int LimiteInferior;
	int LimiteSuperior;
	bool bMoviendoHaciaArriba;
};