// Fill out your copyright notice in the Description page of Project Settings.


#include "ImplementationConcrect.h"

// Sets default values
AImplementationConcrect::AImplementationConcrect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TiempoCapsula = 0.0f;
	TipoPoder = "";
	VerificarCapsula = true;

}

// Called when the game starts or when spawned
void AImplementationConcrect::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AImplementationConcrect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AImplementationConcrect::CapsulaConsumida(FString _consumida)
{
	if (_consumida.Equals("consumida"))
	{
		return true;
	}
	return false;
}

void AImplementationConcrect::HabilitarCapsula(float _tiempo)
{
	TiempoCapsula = _tiempo;
	VerificarCapsula = false;
}

bool AImplementationConcrect::DesHabilitarCapsula()
{
	return VerificarCapsula;
}

FString AImplementationConcrect::ObtenerTipoPoder()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Duracion: %f"), TiempoCapsula));
	return TipoPoder;
}

void AImplementationConcrect::EstablecerTipoPoder(FString _Poder)
{
	TipoPoder = _Poder;
}

