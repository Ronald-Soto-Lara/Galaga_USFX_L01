// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveReab_1.h"

ANaveReab_1::ANaveReab_1() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> 
	ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveReab_1::Mover(float DeltaTime) {
	velocidad = 0.0f;
	//Movimiento Diagonal Arriba-Izquierda.
	SetActorLocation(GetActorLocation() + FVector(0.0f, 0.0f, 0.0f));

}
void ANaveReab_1::Vida() {

}
void ANaveReab_1::Reabastecer() {

}
void ANaveReab_1::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}