// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTransporte_2.h"

ANaveTransporte_2::ANaveTransporte_2() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveTransporte_2::Mover(float DeltaTime) {
	velocidad = 0.25;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}
void ANaveTransporte_2::Vida() {

}
void ANaveTransporte_2::Descargar() {

}
void ANaveTransporte_2::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}