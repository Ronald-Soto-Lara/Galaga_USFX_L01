// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJefe.h"

// Sets default values
ANaveJefe::ANaveJefe()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveJefe::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveJefe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
/*float ANaveJefe::GetVida() const
{
    return Vida;
}

void ANaveJefe::SetVida(float NewVida)
{
    Vida = NewVida;
}

float ANaveJefe::GetEscudo() const
{
    return Escudo;
}

void ANaveJefe::SetEscudo(float NewEscudo)
{
    Escudo = NewEscudo;
}*/

