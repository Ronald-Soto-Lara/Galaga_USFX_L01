// Fill out your copyright notice in the Description page of Project Settings.

#include "MovimientoNaves.h"

// Sets default values for this component's properties
UMovimientoNaves::UMovimientoNaves()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	velocidad = 500.0f;
	movimiento = true;
	// ...
}


// Called when the game starts
void UMovimientoNaves::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UMovimientoNaves::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor* Parent = GetOwner();
	if (Parent) {
		auto nuevaposicion = Parent->GetActorLocation() + FVector(0.0f, movimiento ? velocidad : -velocidad, 0.0f) * DeltaTime;
		Parent->SetActorLocation(nuevaposicion);
		if (movimiento && (GetOwner()->GetActorLocation().Y >= 1800)) {
			movimiento = false;
		}
		else if (!movimiento && (GetOwner()->GetActorLocation().Y <= -1800)) {
			movimiento = true;
		}
		if (movimiento && (GetOwner()->GetActorLocation().X >= 700)) {
			movimiento = false;
		}
		else if (!movimiento && (GetOwner()->GetActorLocation().X <= -700)) {
			movimiento = true;
		}
	}
}