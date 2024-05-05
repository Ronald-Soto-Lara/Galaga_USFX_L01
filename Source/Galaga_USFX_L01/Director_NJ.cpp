// Fill out your copyright notice in the Description page of Project Settings.


#include "Director_NJ.h"

// Sets default values
ADirector_NJ::ADirector_NJ()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirector_NJ::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirector_NJ::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AEscuadronApoyo* ADirector_NJ::getEscAPoyoooooo(IGrupoNavesBuilder* Esc11111)
{
	if (Esc11111)
	{
		Esc11111->BuildNum_Vidas();
		Esc11111->BuildRes_Escudo();
		Esc11111->BuildLim_Tiempo();
		Esc11111->BuildCant_Balas();
		return Esc11111->SetGrupoNavesBuilder();
	}
	return nullptr;
}
