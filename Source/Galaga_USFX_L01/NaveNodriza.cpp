// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"
#include "ProyectilEnemigo_3.h"
#include "FabricaDeProyectiles.h"

ANaveNodriza::ANaveNodriza() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza3.Nodriza3'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(0.35f, 0.35f, 0.35f));
	recordCaza = 0;
	}

void ANaveNodriza::Mover(float DeltaTime) {
	velocidad = 1.0f;
	static float TiempoInicio = GetWorld()->GetTimeSeconds();
	float DesplazamientoHorizontal = FMath::Sin(GetWorld()->GetTimeSeconds() - TiempoInicio) * velocidad;
	SetActorLocation(GetActorLocation() + FVector(DesplazamientoHorizontal, 0.0f, 0.0f));
}
void ANaveNodriza::Vida() {

}
void ANaveNodriza::Ataque() {

}
void ANaveNodriza::Bombardear() {

}
void ANaveNodriza::Ocultar() {

}
void ANaveNodriza::Descargar() {

}
void ANaveNodriza::Escudo() {

}
void ANaveNodriza::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	recordCaza++;
	if (recordCaza * 1 == 20) {
		Disparar();
		recordCaza = 0;
	}
}

void ANaveNodriza::Disparar()
{
	AFabricaDeProyectiles* Fabrica = GetWorld()->SpawnActor<AFabricaDeProyectiles>(AFabricaDeProyectiles::StaticClass());
	Fabrica->FabricarProyectil("Proyectil_3", GetActorLocation(), FRotator::ZeroRotator);
}
