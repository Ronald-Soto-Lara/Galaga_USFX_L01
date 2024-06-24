// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCaza.h"
#include "ProyectilEnemigo.h"
#include "FabricaDeProyectiles.h"

ANaveCaza::ANaveCaza() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh>ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza1.Nodriza1'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(0.35f, 0.35f, 0.35f));
	cadencia = 1.0f;
	recordCaza = 0;
	velocidad = 100.0f; // Velocidad inicial de la nave
	LimiteInferior = -500.0f;
	LimiteSuperior = 500.0f;
	bMoviendoHaciaArriba = true; // Controla la dirección del movimiento
}

void ANaveCaza::Mover(float DeltaTime) {
	FVector NuevaPosicion = GetActorLocation();
	// Determina la dirección del movimiento basado en la posición actual y los límites
	if (NuevaPosicion.Y >= LimiteSuperior) {
		bMoviendoHaciaArriba = false;
	}
	else if (NuevaPosicion.Y <= LimiteInferior) {
		bMoviendoHaciaArriba = true;
	}

	// Actualiza la posición en el eje X basado en la dirección del movimiento
	NuevaPosicion.Y += (bMoviendoHaciaArriba ? velocidad : -velocidad) * DeltaTime;
	SetActorLocation(NuevaPosicion);
}

void ANaveCaza::Ataque() {
}

void ANaveCaza::Vida() {

}

void ANaveCaza::Bombardear() {

}


void ANaveCaza::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	recordCaza++;
	if (recordCaza*1 == 20) {
		Disparar();
		recordCaza = 0;
	}
	//FVector SpawnPLocation = GetActorLocation() + (GetActorForwardVector() * 1);
	//if (ActDisparo == true)
	//{
	//	UWorld* World = GetWorld();
	//	if (World)
	//	{
	//		AProyectilEnemigo* NewProj = World->SpawnActor<AProyectilEnemigo>(SpawnPLocation+FVector(0.0f,0.0f,150.0f), FRotator::ZeroRotator);
	//	}
	//	//Activa el temporizador para el siguiente disparo.
	//	World->GetTimerManager().SetTimer(Timer_fin, this, &ANaveEnemiga::TReset_Proj, cadencia);
	//	ActDisparo = false; //Desactiva el disparo para que no se dispare continuamente.
	//}
}

void ANaveCaza::Disparar()
{
	AFabricaDeProyectiles* Fabrica = GetWorld()->SpawnActor<AFabricaDeProyectiles>(AFabricaDeProyectiles::StaticClass());
	/*Fabrica->FabricarProyectil("Proyectil_3", GetActorLocation(), FRotator::ZeroRotator);*/
	for (int i = 1; i < 5; i++)
	{
		switch (i)
		{
		case 1:
			Fabrica->FabricarProyectil("Proyectil_3", GetActorLocation(), FRotator(0.0f, 45.0f, 0.0f));
			break;
		case 2:
			Fabrica->FabricarProyectil("Proyectil_3", GetActorLocation(), FRotator(0.0f, 135.0f, 0.0f));
			break;
		case 3:
			Fabrica->FabricarProyectil("Proyectil_3", GetActorLocation(), FRotator(0.0f, -45.0f, 0.0f));
			break;
		case 4:
			Fabrica->FabricarProyectil("Proyectil_3", GetActorLocation(), FRotator(0.0f, -135.0f, 0.0f));
			break;
		}
	}
}

void ANaveCaza::DeshacerSalto()
{
}
