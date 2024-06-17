// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoInvisible.h"
#include "Galaga_USFX_L01Pawn.h"
// Sets default values
AEstadoInvisible::AEstadoInvisible()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoInvisible::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstadoInvisible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoInvisible::SetPawn(AGalaga_USFX_L01Pawn* _Pawn)
{
}

void AEstadoInvisible::PawnInvisible()
{
	Pawn = Cast<AGalaga_USFX_L01Pawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
	Pawn->SetActorHiddenInGame(true);
	Pawn->MoveSpeed = 3000.0f;
}

FString AEstadoInvisible::ObtenerEstado()
{
	return "Tamo' invicible";
}