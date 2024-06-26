// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProyectilEnemigo_6.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AProyectilEnemigo_6 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProyectilEnemigo_6();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
	UStaticMeshComponent* MallaDeProyectil_6;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
	int vel;
	class AGalaga_USFX_L01Pawn* Posicionpawn;
	FVector _PosicionPawn;
	virtual void Mover(float DeltaTime);

};
