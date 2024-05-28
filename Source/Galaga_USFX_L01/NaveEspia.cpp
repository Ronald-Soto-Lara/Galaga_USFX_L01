// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEspia.h"

ANaveEspia::ANaveEspia() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> 
	ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveEspia::Mover(float DeltaTime) {
	velocidad = 1.0f;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}
void ANaveEspia::Vida() {

}
void ANaveEspia::Ataque() {

}
void ANaveEspia::Ocultar() {

}
void ANaveEspia::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}