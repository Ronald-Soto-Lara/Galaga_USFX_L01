// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJefe_Nivel_2.h"

// Sets default values
ANaveJefe_Nivel_2::ANaveJefe_Nivel_2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveJefe_Nivel_2::BeginPlay()
{
	Super::BeginPlay();
	Escuadron2 = GetWorld()->SpawnActor<AEscuadronApoyo>();
	
}

// Called every frame
void ANaveJefe_Nivel_2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ANaveJefe_Nivel_2::BuildNum_Vidas()
{
	float Num_Vidas = 3;
	FVector P1 = FVector(-200.0f, -500.0f, 300.0f);
	FRotator R1 = FRotator(0.0f, 0.0f, 0.0f);
	ANaveReab_1* Navereab1 = GetWorld()->SpawnActor<ANaveReab_1>(P1, R1);
	FVector Posicion2 = FVector(-200.0f, -500.0f, 150.0f);
	FRotator Rotacion2 = FRotator(0.0f, 0.0f, 0.0f);
	ANaveReab_2* Navereab2 = GetWorld()->SpawnActor<ANaveReab_2>(Posicion2, Rotacion2);
}

void ANaveJefe_Nivel_2::BuildRes_Escudo()
{
}

void ANaveJefe_Nivel_2::BuildLim_Tiempo()
{
}

void ANaveJefe_Nivel_2::BuildCant_Balas()
{
}

AEscuadronApoyo* ANaveJefe_Nivel_2::SetGrupoNavesBuilder()
{
	AEscuadronApoyo* EscNave = NewObject<AEscuadronApoyo>();
	return EscNave;
}

