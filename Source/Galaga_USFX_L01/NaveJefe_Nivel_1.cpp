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
	Escuadron1 = GetWorld()->SpawnActor<AEscuadronApoyo>();
	
}

// Called every frame
void ANaveJefe_Nivel_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
 
void ANaveJefe_Nivel_1::BuildNum_Vidas()
{
	float Num_Vidas = 3;
		FVector Posicion = FVector(0.0f, 500.0f, 200.0f);
		FVector Posicion_1 = FVector(0.0f, 500.0f, 200.0f);
		FVector a = FVector(0.0f, 200.0f, 0.0f);
		FVector P= FVector(-200.0f, 0.0f, 0.0f);
		FVector p0001 = FVector(0.0f, 500.0f, 200.0f);
		FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
		for (int i = 0; i < 5; i++) {
			Posicion = p0001;
			Posicion_1 = p0001;
			p0001 += P;
			for (int j = 0; j < 5; j++) {
				ANaveCaza_1* navecaza1 = GetWorld()->SpawnActor<ANaveCaza_1>(Posicion += a, Rotacion);
				ANaveEspia_1* navecaza2 = GetWorld()->SpawnActor<ANaveEspia_1>(Posicion_1 += a, Rotacion);
			}
		}
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


