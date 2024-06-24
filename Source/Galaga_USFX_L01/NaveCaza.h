// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "Galaga_USFX_L01Projectile.h"
#include "EstadoBase.h"
#include "NaveCaza.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveCaza : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int numBombas;
public:
	ANaveCaza();
	FORCEINLINE int GetnumBombas() const { return numBombas; }
	FORCEINLINE void SetnumBombas(int _numBombas) { numBombas = _numBombas; }

protected:
	virtual void Mover(float DeltaTime);//Se le pasa el parametro entero DeltaTime para poder calcular el tiempo entre fotogramas.
	virtual void Ataque();
	virtual void Vida();
	virtual void Bombardear();

public:
	//En este caso 'virtual' nos indica que esta funcion puede ser sobreescrita por una subclase.
	//Mientras que 'override' asegura que estemos sobreescribiendo una funcion de la clase base.
	virtual void Tick(float DeltaTime) override;
	virtual void Disparar();
	virtual void DeshacerSalto();
	int recordCaza;
	int LimiteInferior;
	int LimiteSuperior;
	bool bMoviendoHaciaArriba;
};