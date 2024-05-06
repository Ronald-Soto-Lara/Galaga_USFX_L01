/// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEspia_1.h"

ANaveEspia_1::ANaveEspia_1() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh>
	ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveEspia_1::Mover(float DeltaTime) {
	velocidad = 0.0f;
	//Movimiento Diagonal Arriba-Derecha.
	SetActorLocation(GetActorLocation() + FVector(velocidad, velocidad, 0.0f));

}
void ANaveEspia_1::Vida() {

}
void ANaveEspia_1::Ataque() {

}
void ANaveEspia_1::Ocultar() {

}
void ANaveEspia_1::Cadenciaplus() {

}
void ANaveEspia_1::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}