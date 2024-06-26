// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escolta.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEscolta : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscolta();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* MallaDeLaEscolta;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void MoverseEnZ(float DeltaTime);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	float velocidad;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	float LimiteInferior;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	float LimiteSuperior;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	bool bMoviendoHaciaArriba;
	virtual void Disparar(float DeltaTime);
	int RecordEscolta;
};
