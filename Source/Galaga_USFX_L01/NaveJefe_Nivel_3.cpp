// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJefe_Nivel_3.h"
#include "ConstruirNaveJefe.h"

// Sets default values
ANaveJefe_Nivel_3::ANaveJefe_Nivel_3()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveJefe_Nivel_3::BeginPlay()
{
	Super::BeginPlay();

	naveJefe_3 = GetWorld()->SpawnActor<AConstruirNaveJefe>(AConstruirNaveJefe::StaticClass());
	
}

// Called every frame
void ANaveJefe_Nivel_3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveJefe_Nivel_3::BuilCrearBase(int j)
{
	naveJefe_3-> ImplementarBase(j);
}

void ANaveJefe_Nivel_3::BuilCrearSegundoPiso(int k)
{
	naveJefe_3->ImplementarSegundoPiso(k);
}

void ANaveJefe_Nivel_3::BuildTiradores(int l)
{
	naveJefe_3->ImplementarTiradores(l);
}

void ANaveJefe_Nivel_3::BuildCant_Balas(int m)
{
	naveJefe_3->ImplementarCantBalas(m);
}

AConstruirNaveJefe* ANaveJefe_Nivel_3::CrearNaveJefe()
{
	return naveJefe_3;
}