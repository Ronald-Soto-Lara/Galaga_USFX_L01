// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LetreroBienvenida.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ALetreroBienvenida : public AHUD
{
	GENERATED_BODY()	

protected:
	float TamanoTexto;

public:
	ALetreroBienvenida();
	virtual void DrawHUD() override; 
	virtual void WIN_GAME();
	/*virtual void Tick(float DeltaTime) override;*/
};
