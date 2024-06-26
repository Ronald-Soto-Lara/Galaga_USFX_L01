// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsulas.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ACapsulas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsulas();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Capsula")
	UStaticMeshComponent* MallaDeLaCapsula;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
