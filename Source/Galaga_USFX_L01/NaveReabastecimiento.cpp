// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveReabastecimiento.h"
#include "ProyectilEnemigo_4.h"
#include "FabricaDeProyectiles.h"

ANaveReabastecimiento::ANaveReabastecimiento() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza4.Nodriza4'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(0.35f, 0.35f, 0.35f));
	recordReabastecimiento = 0;
}
void ANaveReabastecimiento::Mover(float DeltaTime) {
	velocidad = 1.0f;
	SetActorLocation(FVector(GetActorLocation().X , GetActorLocation().Y, GetActorLocation().Z));
}
void ANaveReabastecimiento::Vida() {

}
void ANaveReabastecimiento::Reabastecer() {

}
void ANaveReabastecimiento::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	recordReabastecimiento++;
	if (recordReabastecimiento * 1 == 20) {
		Disparar();
		recordReabastecimiento = 0;
	}
}

void ANaveReabastecimiento::Disparar()
{
	AFabricaDeProyectiles* Fabrica = GetWorld()->SpawnActor<AFabricaDeProyectiles>(AFabricaDeProyectiles::StaticClass());
	Fabrica->FabricarProyectil("Proyectil_4", GetActorLocation(), FRotator::ZeroRotator);
}
