// Fill out your copyright notice in the Description page of Project Settings.


#include "EmisorDeOrdenes.h"
#include "InterfazCommand.h"

// Sets default values
AEmisorDeOrdenes::AEmisorDeOrdenes()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEmisorDeOrdenes::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEmisorDeOrdenes::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEmisorDeOrdenes::EstablecerOrden(AActor* _orden)
{
	comando = Cast <IInterfazCommand>(_orden);
}

void AEmisorDeOrdenes::EjecutarOrden()
{
	comando->Ejecutar();
}

void AEmisorDeOrdenes::DeshacerOrden()
{
	comando->Deshacer();
}

