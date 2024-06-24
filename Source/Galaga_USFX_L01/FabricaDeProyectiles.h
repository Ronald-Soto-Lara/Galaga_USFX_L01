// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaDeProyectiles.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AFabricaDeProyectiles : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaDeProyectiles();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void FabricarProyectil(FString NombreProyectil, FVector _location, FRotator _rotation);
	class AProyectilEnemigo* Proyectil_1;
	class AProyectilEnemigo_2* Proyectil_2;
	class AProyectilEnemigo_3* Proyectil_3;
	class AProyectilEnemigo_4* Proyectil_4;
	class AProyectilEnemigo_5* Proyectil_5;
};
