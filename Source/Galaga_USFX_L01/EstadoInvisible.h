// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estados.h"
#include "EstadoInvisible.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEstadoInvisible : public AActor, public IEstados
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEstadoInvisible();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(VisibleAnywhere, Category = "PawnInvisible")
	class AGalaga_USFX_L01Pawn* Pawn;
public:
	void SetPawn(class AGalaga_USFX_L01Pawn* _Pawn) override;
	void PawnInvisible() override;
	FORCEINLINE FString ObtenerEstado() override;
private:
	void PawnNormal() override {};
	void PawnLento() override {};
	void PawnInvencible() override {};
};