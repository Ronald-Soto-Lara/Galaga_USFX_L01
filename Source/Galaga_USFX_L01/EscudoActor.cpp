// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudoActor.h"


// Sets default values
AEscudoActor::AEscudoActor()
{

    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Inicializa mallaBarrera antes de usarlo
    mallaBarrera = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBarrera"));

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));

    mallaBarrera->SetStaticMesh(ShipMesh.Object);//esta linea nos permite asignar la malla a nuestro objeto
	movimiento = true;
	velocidad = 100.0f;
}
// Called when the game starts or when spawned
void AEscudoActor::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AEscudoActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (movimiento)
    {
        FVector NewPosition = GetActorLocation() + FVector(0.0f, 0.0f, velocidad) * DeltaTime;
        SetActorLocation(NewPosition);

        // Control de movimiento en el eje Y
        if (GetActorLocation().Y >= 1800)
        {
            movimiento = false;
        }
    }
    else
    {
        FVector NewPosition = GetActorLocation() - FVector(0.0f, 0.0f, velocidad) * DeltaTime;
        SetActorLocation(NewPosition);

        // Control de movimiento en el eje Y
        if (GetActorLocation().Y <= -1800)
        {
            movimiento = true;
        }
    }

    // Control de movimiento en el eje X
    if (GetActorLocation().X >= 700)
    {
        movimiento = false;
    }
    else if (GetActorLocation().X <= -700)
    {
        movimiento = true;
    }
}
