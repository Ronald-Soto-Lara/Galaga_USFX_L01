// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"

ANaveNodriza::ANaveNodriza() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveNodriza::Mover(float DeltaTime) {
	velocidad = 0.25;
	static float TiempoInicio = GetWorld()->GetTimeSeconds();
	float DesplazamientoHorizontal = FMath::Sin(GetWorld()->GetTimeSeconds() - TiempoInicio) * velocidad;
	SetActorLocation(GetActorLocation() + FVector(DesplazamientoHorizontal, 0.0f, 0.0f));

}
void ANaveNodriza::Vida() {

}
void ANaveNodriza::Ataque() {

}
void ANaveNodriza::Bombardear() {

}
void ANaveNodriza::Ocultar() {

}
void ANaveNodriza::Descargar() {

}
void ANaveNodriza::Escudo() {

}
void ANaveNodriza::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}