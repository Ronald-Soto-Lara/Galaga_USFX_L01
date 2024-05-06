// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EscuadronApoyo.h"
#include "GrupoNavesBuilder.h"
#include "NaveCaza_1.h"
#include "NaveEspia_1.h"
#include "NaveJefe_Nivel_1.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveJefe_Nivel_1 : public AActor, public IGrupoNavesBuilder
{
	GENERATED_BODY()
		
public:	
	// Sets default values for this actor's properties
	ANaveJefe_Nivel_1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void BuildNum_Vidas() override;
	virtual void BuildRes_Escudo() override;
	virtual void BuildLim_Tiempo() override;
	virtual void BuildCant_Balas() override;
	virtual AEscuadronApoyo* SetGrupoNavesBuilder() ;
private:
	AEscuadronApoyo* Escuadron1;
};
