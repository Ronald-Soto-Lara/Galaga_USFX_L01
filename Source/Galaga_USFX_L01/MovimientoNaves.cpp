// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoNaves.h"

// Sets default values for this component's properties
UMovimientoNaves::UMovimientoNaves()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	//MovimientoSig = 5;
	MovimientoSig = 5;
	//MovimientoSag = 100.0f;
	bMovimientoDerecha = true;
	bMovimientoArriba = true;
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

	// ...
	AActor* Parent = GetOwner();
	if (Parent)
	{
		// Encuentra una nueva posici�n para que vaya el objeto
		auto NuevaPosicion = Parent->GetActorLocation() + FVector(bMovimientoDerecha ? MovimientoSig : -MovimientoSig,
			bMovimientoArriba ? MovimientoSig : -MovimientoSig, 0.0f);
		//Actualiza la posici�n del objeto
		Parent->SetActorLocation(NuevaPosicion);
		//FVector Movimiento = FVector(bMovimientoArriba ? MovimientoSig : -MovimientoSig,
			//bMovimientoArriba ? MovimientoSig : -MovimientoSig, 0.0f);
		if (bMovimientoDerecha && GetOwner()->GetActorLocation().X >= 1000.0f)
		{
			bMovimientoDerecha = false;
		}
		else if (!bMovimientoDerecha && GetOwner()->GetActorLocation().X <= 100.0f)
		{
			bMovimientoDerecha = true;
		}
		if (bMovimientoArriba && GetOwner()->GetActorLocation().Y >= 1000.0f)
		{
			bMovimientoArriba = false;
		}
		else if (!bMovimientoArriba && GetOwner()->GetActorLocation().Y <= 100.0f)
		{
			bMovimientoArriba = true;
		}
		//Parent->SetActorLocation(Movimiento);
	}

	/*float DesplazamientoHorizontal = MovimientoSig * DeltaTime;
	float DesplazamientoVertical = MovimientoSag * DeltaTime;
	// Si est� movi�ndose hacia la derecha, incrementa la posici�n horizontal
	// Si est� movi�ndose hacia la izquierda, decrementa la posici�n horizontal
	FVector Movimiento = FVector(bMovimientoDerecha ? DesplazamientoHorizontal : -DesplazamientoHorizontal,
		bMovimientoArriba ? DesplazamientoVertical : -DesplazamientoVertical, 0.0f);

	// Aplica el desplazamiento a la posici�n actual del actor
	GetOwner()->AddActorLocalOffset(Movimiento, true);

	// Cambia la direcci�n del movimiento si alcanza un l�mite
	if (bMovimientoDerecha && GetOwner()->GetActorLocation().X >= 1000.0f)
	{
		bMovimientoDerecha = false; // Cambia a moverse hacia la izquierda
	}
	else if (!bMovimientoDerecha && GetOwner()->GetActorLocation().X <= 0.0f)
	{
		bMovimientoDerecha = true; // Cambia a moverse hacia la derecha
	}
	// Cambia la direcci�n del movimiento vertical si alcanza un l�mite
	if (bMovimientoArriba && GetOwner()->GetActorLocation().Y >= 1000.0f)
	{
		bMovimientoArriba = false;
	}
	else if (!bMovimientoArriba && GetOwner()->GetActorLocation().Y <= 0.0f)
	{
		bMovimientoArriba = true;
	}*/
}
