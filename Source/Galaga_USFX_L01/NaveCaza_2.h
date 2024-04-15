// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveCaza.h"
#include "NaveCaza_2.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveCaza_2 : public ANaveCaza
{
	GENERATED_BODY()
private:
	bool super_bomba;
public:
	ANaveCaza_2();
	FORCEINLINE bool SetSuper_bomba() const { return super_bomba; }
	FORCEINLINE void GetSuper_bomba(bool _super_bomba) { super_bomba = _super_bomba; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Ataque();
	virtual void Vida();
	virtual void Bombardear();
	virtual void Cargar_Sbomba();

	virtual void Super_Bomba();
public:
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
private:
	UPROPERTY(EditAnywhere, Category = "Gameplay")
	float BombaDist; //Distancia del escudo con respecto al jugador.
	//FTimerHandle es una estructura brindada por UE que nos permite manejar y referenciar temporizadores.
	FTimerHandle BombaActivar;
	FTimerHandle BombaDesactivar;
};