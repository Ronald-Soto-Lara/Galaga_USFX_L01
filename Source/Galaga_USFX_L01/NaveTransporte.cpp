// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTransporte.h"

ANaveTransporte::ANaveTransporte() {
    // Inicializar la malla de la nave caza
    // Por ejemplo:
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza5.Nodriza5'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
    SetActorRelativeScale3D(FVector(0.35f, 0.35f, 0.35f));
}
void ANaveTransporte::Mover(float DeltaTime) {
    velocidad = 1.0f;
    SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}
void ANaveTransporte::Vida() {

}
void ANaveTransporte::Descargar() {

}
void ANaveTransporte::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}