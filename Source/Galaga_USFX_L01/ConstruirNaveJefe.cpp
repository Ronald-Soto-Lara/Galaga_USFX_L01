// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsulas.h"
#include "Bomba.h"
#include "ClaseExtra.h"
#include "ConstruirNaveJefe.h"


// Sets default values
AConstruirNaveJefe::AConstruirNaveJefe()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConstruirNaveJefe::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConstruirNaveJefe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConstruirNaveJefe::ImplementarBase(int w)
{
	FVector PosCarroceria = FVector(0.0f, 0.0f, 150.0f);
	FRotator RotCarroceria = FRotator(100.0f, 0.0f, 0.0f);

	FVector PosCarroceria1 = FVector(0.0f, -500.0f, 150.0f);
	FRotator RotCarroceria1 = FRotator(100.0f, 0.0f, 0.0f);

	FVector PosCarroceria2 = FVector(0.0f, 650.0f, 150.0f);
	FRotator RotCarroceria2 = FRotator(100.0f, 0.0f, 0.0f);
	switch (w)
	{
	case 1:

		Base = GetWorld()->SpawnActor<ACapsulas>(ACapsulas::StaticClass());
		Base->SetActorRotation(RotCarroceria);
		Base->SetActorLocation(PosCarroceria);

		break;
	case 2:

		Base = GetWorld()->SpawnActor<ACapsulas>(ACapsulas::StaticClass());

		Base->SetActorRotation(RotCarroceria1);
		Base->SetActorLocation(PosCarroceria1);

		break;
	case 3:

		Base = GetWorld()->SpawnActor<ACapsulas>(ACapsulas::StaticClass());

		Base->SetActorRotation(RotCarroceria2);
		Base->SetActorLocation(PosCarroceria2);

		break;
	default:
		break;
	}
}

void AConstruirNaveJefe::ImplementarSegundoPiso(int x)
{
	FVector PosEscudo = FVector(-150.0f, 0.0f, 150.0f);

	FVector PosEscudo1 = FVector(-150.0f, -700.0f, 150.0f);

	switch (x)
	{
	case 1:

		SegundoPiso = GetWorld()->SpawnActor<ACapsulas>(ACapsulas::StaticClass());
		SegundoPiso->SetActorLocation(PosEscudo);

		break;
	case 2:

		for (int i = 0; i < 3; i++)
		{
			SegundoPiso = GetWorld()->SpawnActor<ACapsulas>(ACapsulas::StaticClass());
			SegundoPiso->SetActorLocation(PosEscudo1);
			PosEscudo1.Y = PosEscudo1.Y + 200.0f;
		}

		break;
	case 3:

		break;
	default:
		break;
	}
}

void AConstruirNaveJefe::ImplementarTiradores(int y)
{
	J = y;

	FVector PosProyectil = FVector(-200.0f, -90.0f, 150.0f);

	FVector PosProyectil1 = FVector(-200.0f, 440.0f, 150.0f);

	switch (y)
	{
	case 1:
		for (int i = 0; i < 2; i++)
		{
			Tiradores = GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass());
			Tiradores->SetActorLocation(PosProyectil);
			PosProyectil.Y = PosProyectil.Y + 200.0f;
		}

		break;
	case 2:

		break;
	case 3:
		for (int i = 0; i < 4; i++)
		{
			Tiradores = GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass());
			Tiradores->SetActorLocation(PosProyectil1);
			if (i == 1)
			{
				PosProyectil1.Y = PosProyectil1.Y + 220.0f;
			}
			else
			{
				PosProyectil1.Y = PosProyectil1.Y + 110.0f;
			}
		}

		break;
	default:
		break;
	}
}

void AConstruirNaveJefe::ImplementarCantBalas(int z)
{
	FVector PosArmas = FVector(-25.0f, -90.0f, 150.0f);
	FRotator RotArmas = FRotator(100.0f, 0.0f, 0.0f);

	FVector PosArmas1 = FVector(-25.0f, 440.0f, 150.0f);
	FRotator RotArmas1 = FRotator(100.0f, 0.0f, 0.0f);

	switch (z)
	{
	case 1:
		for (int i = 0; i < 2; i++)
		{
			Cabeza = GetWorld()->SpawnActor<AClaseExtra>(AClaseExtra::StaticClass());
			Cabeza->SetActorRotation(RotArmas);
			Cabeza->SetActorLocation(PosArmas);
			PosArmas.Y = PosArmas.Y + 200.0f;
		}

		break;
	case 2:

		break;
	case 3:
		for (int i = 0; i < 4; i++)
		{
			Cabeza = GetWorld()->SpawnActor<AClaseExtra>(AClaseExtra::StaticClass());
			Cabeza->SetActorRotation(RotArmas1);
			Cabeza->SetActorLocation(PosArmas1);
			if (i == 1)
			{
				PosArmas1.Y = PosArmas1.Y + 220.0f;
			}
			else
			{
				PosArmas1.Y = PosArmas1.Y + 110.0f;
			}
		}

		break;
	default:
		break;
	}

}

