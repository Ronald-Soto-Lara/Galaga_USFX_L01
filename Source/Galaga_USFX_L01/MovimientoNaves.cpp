// Fill out your copyright notice in the Description page of Project Settings.

#include "MovimientoNaves.h"

UMovimientoNaves::UMovimientoNaves()
{
	PrimaryComponentTick.bCanEverTick = true;
	velocidad = 0.0f;
	movimiento = true;
}

void UMovimientoNaves::BeginPlay()
{
	Super::BeginPlay();
}

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