// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SuscriptorInterfaz.h"
#include "ArmarObserver.h"
#include "SuscriptorInterfaz.h"
#include "Bomba.h"
#include "ClaseExtra.h"
#include "EscudoActor.h"
#include "aaConcrectObserver.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AaaConcrectObserver : public AActor, public ISuscriptorInterfaz
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AaaConcrectObserver();
	UStaticMeshComponent* MeshComp;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void AgregarArsenal();
	void DetenerObjeto();
	void ReforzarBarreras();
	void DestruirBarreras();
	void Actualizar(AArmarObserver* Observer)override;
	void Destruir();
	int arma;
	int escudo;
	int velocidad;
	int vida;
	int scoreee;
	int n;
protected:
	AEscudoActor* BarreraObserver;
	AArmarObserver* agregar1;
	AArmarObserver* agregar2;
	AArmarObserver* agregar3;
	AClaseExtra* clasee;
	AClaseExtra* clasee1;
private:
	UPROPERTY(VisibleAnywhere, Category = "Arsenal")
	class ABomba* agregar;
};
