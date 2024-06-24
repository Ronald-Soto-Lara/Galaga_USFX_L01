// Fill out your copyright notice in the Description page of Project Settings.


#include "ReceptorDeOrdenes.h"
#include "NaveCaza.h"
#include "EstadoBase.h"
#include "NaveCaza.h"

// Sets default values
AReceptorDeOrdenes::AReceptorDeOrdenes()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AReceptorDeOrdenes::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AReceptorDeOrdenes::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AReceptorDeOrdenes::Disparar()
{
	ANaveCaza* NaveCazaDisparo = GetWorld()->SpawnActor<ANaveCaza>(ANaveCaza::StaticClass());
	NaveCazaDisparo->Disparar();
}

void AReceptorDeOrdenes::Saltar()
{
	ANaveCaza* NaveCazaSalto = GetWorld()->SpawnActor<ANaveCaza>(ANaveCaza::StaticClass());
	AEstadoBase* Estado = GetWorld()->SpawnActor<AEstadoBase>(AEstadoBase::StaticClass());
	Estado->PawnNormal();
}

void AReceptorDeOrdenes::DeshacerOrden(FString _orden)
{
	if (_orden == "Disparo")
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Deshacer Disparo"));
		ANaveCaza* NaveCazaDisparo = GetWorld()->SpawnActor<ANaveCaza>(ANaveCaza::StaticClass());
		//deshacer orden
	}
	else if (_orden == "Salto")
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Deshacer Salto"));
		ANaveCaza* NaveCazaSalto = GetWorld()->SpawnActor<ANaveCaza>(ANaveCaza::StaticClass());
		NaveCazaSalto->DeshacerSalto();
	}
}

