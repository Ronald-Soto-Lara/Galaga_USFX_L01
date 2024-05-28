// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoLento.h"
#include "Galaga_USFX_L01Pawn.h"

// Sets default values
AEstadoLento::AEstadoLento()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoLento::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstadoLento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoLento::SetPawn(AGalaga_USFX_L01Pawn* _Pawn)
{
	//Pawn = Cast<AGalaga_USFX_L01Pawn>(_Pawn);
}

void AEstadoLento::PawnLento()
{
	Pawn = Cast<AGalaga_USFX_L01Pawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
	Pawn->MoveSpeed = 100.0f;
}

FString AEstadoLento::ObtenerEstado()
{
	return "Pawn lento pa'";
}