// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InterfazCommand.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterfazCommand : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API IInterfazCommand
{
	GENERATED_BODY()

public:

	virtual void Ejecutar() = 0;
	virtual void Deshacer() = 0;

};
