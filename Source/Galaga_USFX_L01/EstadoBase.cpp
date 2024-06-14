// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoBase.h"
#include "Galaga_USFX_L01Pawn.h"

// Sets default values
AEstadoBase::AEstadoBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoBase::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstadoBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoBase::SetPawn(AGalaga_USFX_L01Pawn* _Pawn)
{
	//Pawn = Cast<AGalaga_USFX_L01Pawn>(_Pawn);
}

void AEstadoBase::PawnNormal()
{
	Pawn = Cast<AGalaga_USFX_L01Pawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
	/*Pawn->ResSpeed();
	Pawn->SetActorHiddenInGame(false);
	Pawn->SetActorEnableCollision(true);*/
	Pawn->Salto();
}

FString AEstadoBase::ObtenerEstado()
{
	return "Estado Normal";
}