// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomba.h"
#include "ArmarObserver.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AArmarObserver : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmarObserver();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY(VisibleAnywhere, Category = "Publicador Observer")
	TArray<class AActor*> Suscriptores;
	class ISuscriptorInterfaz* Suscriptor;
	int tiempo;
	int reecord;
public:
	virtual void Suscribir(AActor* Suscribirse);
	virtual void Desuscribir(AActor* Suscribirse);
	virtual void NotificarSubs();
protected:
	int subs;
};
