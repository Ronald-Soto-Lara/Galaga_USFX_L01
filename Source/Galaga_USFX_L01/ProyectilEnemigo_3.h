// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProyectilEnemigo_3.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AProyectilEnemigo_3 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProyectilEnemigo_3();
	UStaticMeshComponent* ProyecEnemy;
	float velocidad;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime);
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE void SetVelocidad(float _vel) { velocidad = _vel; }
	int n;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
};
