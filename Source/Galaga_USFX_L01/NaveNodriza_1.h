// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveNodriza.h"
#include "NaveNodriza_1.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveNodriza_1 : public ANaveNodriza
{
	GENERATED_BODY()
private:
	int multiplicadorbonus;
public:
	ANaveNodriza_1();
	FORCEINLINE int GetMultiplicadorBonus() const { return multiplicadorbonus; }

	FORCEINLINE void SetMultiplicadorBonus(int _multiplicadorbonus) { multiplicadorbonus = _multiplicadorbonus; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Vida();
	virtual void Ataque();
	virtual void Ocultar();
	virtual void Cadenciaplus();
public:
	virtual void Tick(float DeltaTime) override;
};