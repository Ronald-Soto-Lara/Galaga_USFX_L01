// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveReab_2.h"

ANaveReab_2::ANaveReab_2() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> 
	ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveReab_2::Mover(float DeltaTime) {
	FVector PActual = GetActorLocation();
	velocidad = 0.0f;
	SetActorLocation(FVector(GetActorLocation().X , GetActorLocation().Y, GetActorLocation().Z));
}
void ANaveReab_2::Vida() {

}
void ANaveReab_2::Reabastecer() {

}
void ANaveReab_2::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}