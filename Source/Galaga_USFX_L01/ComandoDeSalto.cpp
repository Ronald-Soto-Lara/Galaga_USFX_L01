// Fill out your copyright notice in the Description page of Project Settings.


#include "ReceptorDeOrdenes.h"
#include "ComandoDeSalto.h"

// Sets default values
AComandoDeSalto::AComandoDeSalto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Salto = false;

}

// Called when the game starts or when spawned
void AComandoDeSalto::BeginPlay()
{
	Super::BeginPlay();

	Orden = GetWorld()->SpawnActor<AReceptorDeOrdenes>(AReceptorDeOrdenes::StaticClass());
}

// Called every frame
void AComandoDeSalto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AComandoDeSalto::Ejecutar()
{
	Salto = true;
	if (Salto)
	{
		Orden->Saltar();
	}

}

void AComandoDeSalto::Deshacer()
{
	Salto = false;
	if (!Salto)
	{
		Orden->DeshacerOrden("Salto");
	}
}

