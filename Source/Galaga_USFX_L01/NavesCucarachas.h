// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavesCucarachas.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANavesCucarachas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANavesCucarachas();
	UStaticMeshComponent* MeshCucarachas;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
public:
	virtual void OrdenarNavesCucarachas();
private:
};