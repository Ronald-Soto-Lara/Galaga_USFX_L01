// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJefe_Nivel_1.h"
#include "ConstruirNaveJefe.h"

// Sets default values
ANaveJefe_Nivel_1::ANaveJefe_Nivel_1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveJefe_Nivel_1::BeginPlay()
{
	Super::BeginPlay();
	naveJefe_1 = GetWorld()->SpawnActor<AConstruirNaveJefe>(AConstruirNaveJefe::StaticClass());
	
}

// Called every frame
void ANaveJefe_Nivel_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
 
void ANaveJefe_Nivel_1::BuilCrearBase(int j)
{
	naveJefe_1->ImplementarBase(j);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Base"));
}

void ANaveJefe_Nivel_1::BuilCrearSegundoPiso(int k)
{
	naveJefe_1->ImplementarSegundoPiso(k);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("SegundoPiso"));
}

void ANaveJefe_Nivel_1::BuildTiradores(int l)
{
	naveJefe_1->ImplementarTiradores(l);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Tiradores"));
}

void ANaveJefe_Nivel_1::BuildCant_Balas(int m)
{
	naveJefe_1->ImplementarCantBalas(m);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("CantBalas"));
}

AConstruirNaveJefe* ANaveJefe_Nivel_1::CrearNaveJefe()
{
	return naveJefe_1;
}


