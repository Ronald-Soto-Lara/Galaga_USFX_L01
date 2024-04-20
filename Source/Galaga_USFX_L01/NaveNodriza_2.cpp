// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza_2.h"

ANaveNodriza_2::ANaveNodriza_2() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> 
	ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveNodriza_2::Mover(float DeltaTime) {
	velocidad = 1.0f;
	//Movimiento Diagonal Abajo-Izquierda.
	SetActorLocation(GetActorLocation() + FVector(-velocidad, -velocidad, 0.0f));

}
void ANaveNodriza_2::Vida() {

}
void ANaveNodriza_2::Ataque() {

}
void ANaveNodriza_2::Ocultar() {

}
void ANaveNodriza_2::Velocidadplus() {

}
void ANaveNodriza_2::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
