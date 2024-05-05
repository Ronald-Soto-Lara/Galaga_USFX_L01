// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJefe_Nivel_1.h"

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
	EscFinal = GetWorld()->SpawnActor<AEscuadronApoyo>();
	
}

// Called every frame
void ANaveJefe_Nivel_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
 
void ANaveJefe_Nivel_1::BuildNum_Vidas()
{
	float Num_Vidas = 3;
	FVector P11 = FVector(-700.0f, -500.0f, 300.0f);
	FRotator R11 = FRotator(0.0f, 0.0f, 0.0f);
	ANaveCaza_1* navecaza1 = GetWorld()->SpawnActor<ANaveCaza_1>(P11, R11);
	FVector Posicion21 = FVector(-700.0f, -500.0f, 150.0f);
	FRotator Rotacion21 = FRotator(0.0f, 0.0f, 0.0f);
	ANaveCaza_2* navecaza2 = GetWorld()->SpawnActor<ANaveCaza_2>(Posicion21, Rotacion21);
}

void ANaveJefe_Nivel_1::BuildRes_Escudo()
{
}

void ANaveJefe_Nivel_1::BuildLim_Tiempo()
{
}

void ANaveJefe_Nivel_1::BuildCant_Balas()
{
}

AEscuadronApoyo* ANaveJefe_Nivel_1::SetGrupoNavesBuilder()
{
	AEscuadronApoyo* EscNave1 = NewObject<AEscuadronApoyo>();
	return EscNave1;
}


