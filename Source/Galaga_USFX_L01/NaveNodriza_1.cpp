/// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza_1.h"

ANaveNodriza_1::ANaveNodriza_1() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveNodriza_1::Mover(float DeltaTime) {
	velocidad = 0.25;
	//Movimiento Diagonal Arriba-Derecha.
	SetActorLocation(GetActorLocation() + FVector(velocidad, velocidad, 0.0f));

}
void ANaveNodriza_1::Vida() {

}
void ANaveNodriza_1::Ataque() {

}
void ANaveNodriza_1::Ocultar() {

}
void ANaveNodriza_1::Cadenciaplus() {

}
void ANaveNodriza_1::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}