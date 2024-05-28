// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estados.h"
#include "EstadoBase.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEstadoBase : public AActor, public IEstados
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEstadoBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(VisibleAnywhere, Category = "PawnNormalito")
	class AGalaga_USFX_L01Pawn* Pawn;
public:
	void SetPawn(class AGalaga_USFX_L01Pawn* _Pawn) override;
	void PawnNormal() override;
	FORCEINLINE FString ObtenerEstado() override;
private:
	void PawnLento() override {};
	void PawnInvisible() override {};
	void PawnInvencible() override {};
};