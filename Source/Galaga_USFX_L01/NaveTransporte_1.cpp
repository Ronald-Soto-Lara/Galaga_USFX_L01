// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTransporte_1.h"

ANaveTransporte_1::ANaveTransporte_1() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveTransporte_1::Mover(float DeltaTime) {
	velocidad = 1.0f;
	//Movimiento Circular.
	float Radio = 100.0f;
	float Angulo = GetWorld()->GetTimeSeconds() * velocidad;
	FVector NuevaPosicion = FVector(FMath::Cos(Angulo), FMath::Sin(Angulo), 0.0f) * Radio;
	SetActorLocation(NuevaPosicion);

}
void ANaveTransporte_1::Vida() {

}
void ANaveTransporte_1::Descargar() {

}
void ANaveTransporte_1::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}