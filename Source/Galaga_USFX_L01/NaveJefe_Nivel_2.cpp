// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJefe_Nivel_2.h"
#include "ConstruirNaveJefe.h"

// Sets default values
ANaveJefe_Nivel_2::ANaveJefe_Nivel_2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveJefe_Nivel_2::BeginPlay()
{
	Super::BeginPlay();
	naveJefe_2 = GetWorld()->SpawnActor<AConstruirNaveJefe>(AConstruirNaveJefe::StaticClass());
	
}

// Called every frame
void ANaveJefe_Nivel_2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ANaveJefe_Nivel_2::BuilCrearBase(int j)
{
	naveJefe_2->ImplementarBase(j);
}

void ANaveJefe_Nivel_2::BuilCrearSegundoPiso(int k)
{
	naveJefe_2->ImplementarSegundoPiso(k);
}

void ANaveJefe_Nivel_2::BuildTiradores(int l)
{
	naveJefe_2->ImplementarTiradores(l);
}

void ANaveJefe_Nivel_2::BuildCant_Balas(int m)
{
	naveJefe_2->ImplementarCantBalas(m);
}

AConstruirNaveJefe* ANaveJefe_Nivel_2::CrearNaveJefe()
{
	return naveJefe_2;
}