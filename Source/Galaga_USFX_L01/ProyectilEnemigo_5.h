// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProyectilEnemigo_5.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AProyectilEnemigo_5 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProyectilEnemigo_5();
	UStaticMeshComponent* ProyecEnemy;
	float vel;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Mover();
	FORCEINLINE float GetVelocidad() const { return vel; }
	FORCEINLINE void SetVelocidad(float _vel) { vel = _vel; }
	int n;

};
