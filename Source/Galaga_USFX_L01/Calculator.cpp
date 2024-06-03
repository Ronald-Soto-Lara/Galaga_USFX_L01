// Fill out your copyright notice in the Description page of Project Settings.


#include "Calculator.h"

ACalculator::ACalculator()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACalculator::BeginPlay()
{
	Super::BeginPlay();
}

void ACalculator::Tick(float _DeltaTime)
{
	Super::Tick(_DeltaTime);
}

void ACalculator::CambioHora()
{
	//NotificadorSubscriptores();
}

void ACalculator::SetHora(FString _Hora)
{
	Tiempo = _Hora;
	CambioHora();
}

FString ACalculator::GetHora()
{
	return Tiempo;
}
