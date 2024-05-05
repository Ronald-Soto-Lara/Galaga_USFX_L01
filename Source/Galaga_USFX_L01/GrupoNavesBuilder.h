// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EscuadronApoyo.h"
#include "GrupoNavesBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UGrupoNavesBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API IGrupoNavesBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void BuildNum_Vidas() = 0;
	virtual void BuildRes_Escudo() = 0;
	virtual void BuildLim_Tiempo() = 0;
	virtual void BuildCant_Balas() = 0;
	virtual AEscuadronApoyo* SetGrupoNavesBuilder() = 0;
};
