// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEspia_2.h"

ANaveEspia_2::ANaveEspia_2() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh>ShipMesh(TEXT("StaticMesh'/Game/Meshes/SM_Rock.SM_Rock'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveEspia_2::Mover(float DeltaTime) {
	velocidad = 1.0f;
	//Movimiento Diagonal Abajo-Izquierda.
	SetActorLocation(GetActorLocation() + FVector(-velocidad, -velocidad, 0.0f));

}
void ANaveEspia_2::Vida() {

}
void ANaveEspia_2::Ataque() {

}
void ANaveEspia_2::Ocultar() {

}
void ANaveEspia_2::Velocidadplus() {

}
void ANaveEspia_2::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}