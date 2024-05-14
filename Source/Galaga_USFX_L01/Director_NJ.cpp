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

void ADirector_NJ::ConstruirBaseJefe(AActor* Jefe)
{
	Construccion = Cast<IGrupoNavesBuilder>(Jefe);//Para poder acceder a mis clases concretas, lo estamos casteando para que sea un actor
}

void ADirector_NJ::ConstruirSegundoPisoJefe()
{
	Construccion->BuilCrearBase(0);
	Construccion->BuilCrearSegundoPiso(0);
	Construccion->BuildTiradores(0);
	Construccion->BuildCant_Balas(0);
}

void ADirector_NJ::ConstruirTiradoresJefe()
{
	Construccion->BuilCrearBase(0);
	Construccion->BuilCrearSegundoPiso(0);
}

void ADirector_NJ::ConstruirCantBalasJefe()
{
	Construccion->BuilCrearBase(0);
	Construccion->BuildTiradores(0);
	Construccion->BuildCant_Balas(0);
}

AConstruirNaveJefe* ADirector_NJ::ConstruirNaveJefe()
{
	return Construccion->CrearNaveJefe();
}
