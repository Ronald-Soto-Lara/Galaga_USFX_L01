// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaDeProyectiles.h"
#include "ProyectilEnemigo.h"
#include "ProyectilEnemigo_2.h"
#include "ProyectilEnemigo_3.h"
#include "ProyectilEnemigo_4.h"
#include "ProyectilEnemigo_5.h"
#include "ProyectilEnemigo_6.h"

// Sets default values
AFabricaDeProyectiles::AFabricaDeProyectiles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaDeProyectiles::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaDeProyectiles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFabricaDeProyectiles::FabricarProyectil(FString NombreProyectil, FVector _location, FRotator _rotation)
{
	if (NombreProyectil == "Proyectil_1")
	{
		Proyectil_1 = GetWorld()->SpawnActor<AProyectilEnemigo>(_location, _rotation);
	}
	if (NombreProyectil == "Proyectil_2")
	{
		Proyectil_2 = GetWorld()->SpawnActor<AProyectilEnemigo_2>(_location, _rotation);
	}
	if (NombreProyectil == "Proyectil_3")
	{
		Proyectil_3 = GetWorld()->SpawnActor<AProyectilEnemigo_3>(_location, _rotation);
	}
	if (NombreProyectil == "Proyectil_4")
	{
		Proyectil_4 = GetWorld()->SpawnActor<AProyectilEnemigo_4>(_location, _rotation);
	}
	if (NombreProyectil == "Proyectil_5")
	{
		Proyectil_5 = GetWorld()->SpawnActor<AProyectilEnemigo_5>(_location, _rotation);
	}
	if (NombreProyectil == "Proyectil_6")
	{
		Proyectil_6 = GetWorld()->SpawnActor<AProyectilEnemigo_6>(_location, _rotation);
	}
}

