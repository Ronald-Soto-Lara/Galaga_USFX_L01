// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Proteccion.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AProteccion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProteccion();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Proteccion")
	UStaticMeshComponent* MallaDeLaProteccion;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void DecrementarVida(int _vida);
	int vida;

};
