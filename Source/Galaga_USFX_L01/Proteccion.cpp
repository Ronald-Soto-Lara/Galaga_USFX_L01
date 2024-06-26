// Fill out your copyright notice in the Description page of Project Settings.


#include "Proteccion.h"

// Sets default values
AProteccion::AProteccion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Meshes/Shapes/Shape_Trim.Shape_Trim'"));
	MallaDeLaProteccion = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProteccionMesh0"));
	MallaDeLaProteccion->SetStaticMesh(MeshAsset.Object);
	MallaDeLaProteccion->SetWorldScale3D(FVector(5.0f, 10.0f, 5.0f));
	vida = 50;
}

// Called when the game starts or when spawned
void AProteccion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProteccion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProteccion::DecrementarVida(int _vida)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("BAJO LA VIDA DEL ESCUDO A %d"), vida));
	vida -= _vida;
	if (vida <= 0) {
		Destroy();
	}
}

