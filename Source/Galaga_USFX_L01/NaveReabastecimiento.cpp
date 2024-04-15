// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveReabastecimiento.h"

ANaveReabastecimiento::ANaveReabastecimiento() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveReabastecimiento::Mover(float DeltaTime) {
	velocidad = 0.25;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}
void ANaveReabastecimiento::Vida() {

}
void ANaveReabastecimiento::Reabastecer() {

}
void ANaveReabastecimiento::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}