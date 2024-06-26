// Fill out your copyright notice in the Description page of Project Settings.


#include "Escolta.h"
#include "ProyectilEnemigo_3.h"
#include "FabricaDeProyectiles.h"

// Sets default values
AEscolta::AEscolta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Meshes/EnemyLevel1.EnemyLevel1'"));
	MallaDeLaEscolta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscoltaMesh0"));
	MallaDeLaEscolta->SetStaticMesh(MeshAsset.Object);
	velocidad = 300.0f; // Velocidad inicial de la nave
	LimiteInferior = 150.0f;
	LimiteSuperior = 800.0f;
	bMoviendoHaciaArriba = true; // Controla la dirección del movimiento
	RecordEscolta = 0;
}

// Called when the game starts or when spawned
void AEscolta::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEscolta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RecordEscolta++;
	MoverseEnZ(DeltaTime);
	if (RecordEscolta * 1 == 20) {
		Disparar(DeltaTime);
		RecordEscolta = 0;
	}
}

void AEscolta::MoverseEnZ(float DeltaTime)
{
	FVector NuevaPosicion = GetActorLocation();
	// Determina la dirección del movimiento basado en la posición actual y los límites
	if (NuevaPosicion.Z >= LimiteSuperior) {
		bMoviendoHaciaArriba = false;
	}
	else if (NuevaPosicion.Z <= LimiteInferior) {
		bMoviendoHaciaArriba = true;
	}

	// Actualiza la posición en el eje X basado en la dirección del movimiento
	NuevaPosicion.Z += (bMoviendoHaciaArriba ? velocidad : -velocidad) * DeltaTime;
	SetActorLocation(NuevaPosicion);
}

void AEscolta::Disparar(float DeltaTime)
{
	AFabricaDeProyectiles* Fabrica = GetWorld()->SpawnActor<AFabricaDeProyectiles>(AFabricaDeProyectiles::StaticClass());
	Fabrica->FabricarProyectil("Proyectil_6", GetActorLocation(), FRotator::ZeroRotator);
}

