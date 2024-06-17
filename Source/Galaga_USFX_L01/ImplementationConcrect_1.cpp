// Fill out your copyright notice in the Description page of Project Settings.


#include "ImplementationConcrect_1.h"

// Sets default values
AImplementationConcrect_1::AImplementationConcrect_1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TiempoCapsula = 0.0f;
	TipoPoder = "";
	VerificarCapsula = true;

}

// Called when the game starts or when spawned
void AImplementationConcrect_1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AImplementationConcrect_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AImplementationConcrect_1::CapsulaConsumida(FString _consumida)
{
	if (_consumida.Equals("consumida"))
	{
		return true;
	}
	return false;
}

void AImplementationConcrect_1::HabilitarCapsula(float _tiempo)
{
	TiempoCapsula = _tiempo;
	VerificarCapsula = false;
}

bool AImplementationConcrect_1::DesHabilitarCapsula()
{
	return VerificarCapsula;
}

FString AImplementationConcrect_1::ObtenerTipoPoder()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Duracion: %f"), TiempoCapsula));
	return TipoPoder;

}

void AImplementationConcrect_1::EstablecerTipoPoder(FString _Poder)
{
	TipoPoder = _Poder;
}

