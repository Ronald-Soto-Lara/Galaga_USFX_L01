// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"

ANaveNodriza::ANaveNodriza() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza3.Nodriza3'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(0.35f, 0.35f, 0.35f));
}
void ANaveNodriza::Mover(float DeltaTime) {
	velocidad = 1.0f;
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