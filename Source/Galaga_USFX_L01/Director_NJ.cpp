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
	Construccion->BuilCrearBase(1);
	Construccion->BuilCrearSegundoPiso(1);
	Construccion->BuildTiradores(1);
	Construccion->BuildCant_Balas(1);
}

void ADirector_NJ::ConstruirTiradoresJefe()
{
	Construccion->BuilCrearBase(2);
	Construccion->BuilCrearSegundoPiso(2);
}

void ADirector_NJ::ConstruirCantBalasJefe()
{
	Construccion->BuilCrearBase(3);
	Construccion->BuildTiradores(3);
	Construccion->BuildCant_Balas(3);
}

AConstruirNaveJefe* ADirector_NJ::ConstruirNaveJefe()
{
	return Construccion->CrearNaveJefe();
}
