// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveAleatoriaTerrestre.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveAleatoriaTerrestre : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivate));	
	UStaticMeshComponent* MallaNaveTerrestre;
	
public:	
	// Sets default values for this actor's properties
	ANaveAleatoriaTerrestre();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
