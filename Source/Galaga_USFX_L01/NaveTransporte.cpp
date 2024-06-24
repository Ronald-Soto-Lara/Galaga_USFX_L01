// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTransporte.h"
#include "ProyectilEnemigo_5.h"
#include "FabricaDeProyectiles.h"

ANaveTransporte::ANaveTransporte() {
    // Inicializar la malla de la nave caza
    // Por ejemplo:
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza5.Nodriza5'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
    SetActorRelativeScale3D(FVector(0.35f, 0.35f, 0.35f));
    recordCaza = 0;
    velocidad = 100.0f; // Velocidad inicial de la nave
    LimiteInferior = -500.0f;
    LimiteSuperior = 500.0f;
    bMoviendoHaciaArriba = true; // Controla la dirección del movimiento
}
void ANaveTransporte::Mover(float DeltaTime) {
   ///* velocidad = 1.0f;
   // SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));*/
   // // Definir límites de movimiento
   // velocidad = 100.0f;
   // float LimiteInferior = -500.0f;
   // float LimiteSuperior = 500.0f;
   // // Actualizar la posición
   // FVector NuevaPosicion = GetActorLocation();
   // NuevaPosicion.X -= velocidad * DeltaTime;
   // if (NuevaPosicion.X <= LimiteInferior || NuevaPosicion.X >= LimiteSuperior) {
   //     velocidad = -velocidad; // Invertir la dirección de la velocidad
   // }

   // // Establecer la nueva ubicación
   // SetActorLocation(NuevaPosicion);
    FVector NuevaPosicion = GetActorLocation();
    // Determina la dirección del movimiento basado en la posición actual y los límites
    if (NuevaPosicion.X >= LimiteSuperior) {
        bMoviendoHaciaArriba = false;
    }
    else if (NuevaPosicion.X <= LimiteInferior) {
        bMoviendoHaciaArriba = true;
    }

    // Actualiza la posición en el eje X basado en la dirección del movimiento
    NuevaPosicion.X += (bMoviendoHaciaArriba ? velocidad : -velocidad) * DeltaTime;
    SetActorLocation(NuevaPosicion);
}
void ANaveTransporte::Vida() {

}
void ANaveTransporte::Descargar() {

}
void ANaveTransporte::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
    recordCaza++;
    if (recordCaza * 1 == 20) {
        Disparar();
        recordCaza = 0;
    }
}

void ANaveTransporte::Disparar()
{
    AFabricaDeProyectiles* Fabrica = GetWorld()->SpawnActor<AFabricaDeProyectiles>(AFabricaDeProyectiles::StaticClass());
    Fabrica->FabricarProyectil("Proyectil_5", GetActorLocation(), FRotator::ZeroRotator);
}
//original