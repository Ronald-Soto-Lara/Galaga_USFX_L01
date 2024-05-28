// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoInvencible.h"
#include "Galaga_USFX_L01Pawn.h"

// Sets default values
AEstadoInvencible::AEstadoInvencible()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoInvencible::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstadoInvencible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoInvencible::SetPawn(AGalaga_USFX_L01Pawn* _Pawn)
{
	//Pawn = Cast<AGalaga_USFX_L01Pawn>(_Pawn);
}

void AEstadoInvencible::PawnInvencible()
{
	Pawn = Cast<AGalaga_USFX_L01Pawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
	Pawn->SetActorHiddenInGame(false);
	Pawn->SetActorEnableCollision(false);
}

FString AEstadoInvencible::ObtenerEstado()
{
	return "Soy dios pa'";
}