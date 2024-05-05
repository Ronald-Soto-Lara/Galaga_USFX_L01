// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudoEscena.h"

// Sets default values for this component's properties
UEscudoEscena::UEscudoEscena()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UEscudoEscena::CrearBarrera()
{
	UWorld* TheWorld = GetWorld();
	if (TheWorld != nullptr)
	{
		FTransform ComponentTransform(this->GetComponentTransform());
		TheWorld->SpawnActor(BarreraToSpawn, &ComponentTransform);
	}

}

// Called when the game starts
void UEscudoEscena::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UEscudoEscena::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

