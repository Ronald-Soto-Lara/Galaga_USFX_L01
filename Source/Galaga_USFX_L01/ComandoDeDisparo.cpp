// Fill out your copyright notice in the Description page of Project Settings.


#include "ReceptorDeOrdenes.h"
#include "ComandoDeDisparo.h"

// Sets default values
AComandoDeDisparo::AComandoDeDisparo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Disparo = false;
}

// Called when the game starts or when spawned
void AComandoDeDisparo::BeginPlay()
{
	Super::BeginPlay();
	Orden = GetWorld()->SpawnActor<AReceptorDeOrdenes>(AReceptorDeOrdenes::StaticClass());
	
}

// Called every frame
void AComandoDeDisparo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void AComandoDeDisparo::ObtenerPawn()
//{
//	PunteroPawn = Cast<AGalaga_USFX_L01Pawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
//}

void AComandoDeDisparo::Ejecutar()
{
	Disparo = true;
	if (Disparo)
	{
		Orden->Disparar();
	}
}

void AComandoDeDisparo::Deshacer()
{
	Disparo = false;
	if (!Disparo)
	{
		Orden->DeshacerOrden("Disparo");
	}
}

