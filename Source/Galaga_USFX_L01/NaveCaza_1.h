// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveCaza.h"
#include "NaveCaza_1.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveCaza_1 : public ANaveCaza
{
	GENERATED_BODY()
private:
	float tiempo_escudo;
public:
	ANaveCaza_1();
	FORCEINLINE float SetTiempo_escudo() const { return tiempo_escudo; }
	FORCEINLINE void GetTiempo_escudo(float _tiempo_escudo) { tiempo_escudo = _tiempo_escudo; }
protected:
	//Se le pondra override ? XD.
	virtual void Mover(float DeltaTime);
	virtual void Ataque();
	virtual void Vida();
	virtual void Bombardear();
	virtual void Escudo();
public:
	virtual void Tick(float DeltaTime) override;
};