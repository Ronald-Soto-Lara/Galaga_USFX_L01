// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "Capsula.h"
#include "Director_NJ.h"
#include "ConstruirNaveJefe.h"
#include "NaveJefe_Nivel_1.h"
#include "NaveJefe_Nivel_2.h"
#include "NaveJefe_Nivel_3.h"
#include "EscuadronesFacade.h"
#include "Components/SceneComponent.h"
#include "EscudoEscena.h"
#include "EstadoBase.h"
#include "EstadoLento.h"
#include "EstadoInvisible.h"
#include "EstadoInvencible.h"
#include "aaConcrectObserver.h"
#include "NaveEstrategy.h"
#include "ComandoDeSalto.h"
#include "ComandoDeDisparo.h"
#include "ReceptorDeOrdenes.h"
#include "EmisorDeOrdenes.h"
#include "ImplementationConcrect.h"
#include "ImplementationConcrect_1.h"
#include "TimerManager.h"
#include "CapsulaVida.h"
#include "NaveCaza.h"


AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	Ordenes = TArray<AActor*>();
	temp = 0;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
	naves = true;
	TimeDay = 0.0f;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 100.f, FColor::Green, FString::Printf(TEXT("TU RECORD ES")));
	Emisor = GetWorld()->SpawnActor<AEmisorDeOrdenes>(AEmisorDeOrdenes::StaticClass());

	//Patrón Facade
	int32 EjecutarNave = FMath::RandRange(1, 5);
	Naves = GetWorld()->SpawnActor<AEscuadronesFacade>(AEscuadronesFacade::StaticClass());
	Naves->CrearEscuadrones(EjecutarNave);

	//Patron Bridge
	Bridge1 = GetWorld()->SpawnActor<AImplementationConcrect>(AImplementationConcrect::StaticClass());
	Bridge2 = GetWorld()->SpawnActor<AImplementationConcrect_1>(AImplementationConcrect_1::StaticClass());
	Capsula = GetWorld()->SpawnActor<ACapsula>(ACapsula::StaticClass());
	
	EstadoLento = GetWorld()->SpawnActor<AEstadoLento>(AEstadoLento::StaticClass());
	EstadoLento->PawnLento();
	for (int i = 0; i <= 4; i++)
	{
		Capsulas = GetWorld()->SpawnActor<ACapsulaVida>(FVector(-1000.0f, -500.0f, 150.0f)+FVector(0.0f, 250.0f * i,0.0f), FRotator::ZeroRotator);
	}

	//Patron Observer
	AaaConcrectObserver* Observer = GetWorld()->SpawnActor<AaaConcrectObserver>(FVector(0.0f, 0.0f, 150.0f), FRotator(0.0f, 90.0f, 90.0f));
	ANaveEstrategy*NaveStrategy_0  = GetWorld()->SpawnActor<ANaveEstrategy>(ANaveEstrategy::StaticClass());
	for (int i=0 ; i<=2; i++)
	{
		NaveEstrategy = GetWorld()->SpawnActor<ANaveEstrategy>(FVector(-1200.0f, -250.0f, 150.0f)+FVector(0.0f,250.0f*i,0.0f), FRotator(0.0f, 0.0f, 0.0f));
	}

	TMapPowerUp.Add(3000, "escudo");
	TMapPowerUp.Add(200, "doble tiro");
	TMapPowerUp.Add(1000, "vida extra");
	TMapPowerUp.Add(1500, "invulnerable");
	TMapPowerUp.Add(500, "velocidad");

	PowerUpStatusMap.Add(3000, false);
	PowerUpStatusMap.Add(200, false);
	PowerUpStatusMap.Add(1000, false);
	PowerUpStatusMap.Add(1500, false);
	PowerUpStatusMap.Add(500, false);
	RECORD = 0;
}


void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Incrementación de Variables de acuerdo a cada frame
	TiempoTranscurrido++, RECORD++;
	if (TiempoTranscurrido * 1 == 100)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("RECORD: %d"), RECORD));
		TiempoTranscurrido = 0;
	}

	//Patrón Bridge
	if (RECORD == 100)
	{
		Capsula->EstablecerPersonaje(Bridge1);
		Capsula->VerificarCapsulaConsumida("consumida", 5.0f);
		Capsula->TiposCapsulas("Salto");
		Capsula->EmplearCapsula();
	}
	if (RECORD == 150)
	{
		Capsula->EstablecerPersonaje(Bridge2);
		Capsula->VerificarCapsulaConsumida("consumida", 10.0f);
		Capsula->TiposCapsulas("Vida");
		Capsula->EmplearCapsula();
	}
	if(RECORD == 200)
	{
		Capsula->EstablecerPersonaje(Bridge2);
		Capsula->VerificarCapsulaConsumida("noconsumida", 15.0f);
		Capsula->TiposCapsulas("Fuerza");
		Capsula->EmplearCapsula();
	}

	//Patrón Command
	if (RECORD == 1300)
	{
		EjecutarComandoDisparar();
	}
	if (RECORD == 1400)
	{
		DeshacerComando();
	}
	if (RECORD == 1500)
	{
		EjecutarComandoSaltar();
	}
	if (RECORD == 1600)
	{
		DeshacerComando();
	}

	//Patrón State
	if (RECORD == 250)
	{
		EstadoInvisible = GetWorld()->SpawnActor<AEstadoInvisible>(AEstadoInvisible::StaticClass());
		EstadoInvisible->PawnInvisible();
	}
	if (RECORD == 1250)
	{
		EstadoBase = GetWorld()->SpawnActor<AEstadoBase>(AEstadoBase::StaticClass());
		EstadoBase->PawnNormal();
	}
	/*if (RECORD >= 0.0f)
	{
		NaveEstrategica->CambiarEstrategia(EstNavEstandar);
		NaveEstrategica->AplicarEstrategia(DeltaTime);
	}
	if (RECORD >= 15.0f)
	{
		NaveEstrategica->CambiarEstrategia(EstNavIntimidacion);
		NaveEstrategica->AplicarEstrategia(DeltaTime);
	}
	if (RECORD >= 30.0f)
	{
		NaveEstrategica->CambiarEstrategia(EstNavDefensiva);
		NaveEstrategica->AplicarEstrategia(DeltaTime);
	}*/
	for (const auto& par : TMapPowerUp)
	{
		int scoreMap = par.Key;
		FString PowerUp = par.Value;
		if (scoreMap == RECORD)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("PowerUp: %s"), *PowerUp));
		}
		for (auto& par2 : PowerUpStatusMap)
		{
			int PowerUpScore = par2.Key;
			bool& bPowerUpStatus = par2.Value;

			if (RECORD >= PowerUpScore && !bPowerUpStatus)
			{
				bPowerUpStatus = true;
				FString StatusMessage = FString::Printf(TEXT("PowerUp with score %d is now active: %s"), PowerUpScore, bPowerUpStatus ? TEXT("True") : TEXT("False"));
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, StatusMessage);
			}
		}
	}
	TimeDay += DeltaTime;
}

void AGalaga_USFX_L01GameMode::EjecutarComandoSaltar()
{
	if (Emisor)
	{
		CSaltar = GetWorld()->SpawnActor<AComandoDeSalto>(AComandoDeSalto::StaticClass());
		Emisor->EstablecerOrden(CSaltar);
		Emisor->EjecutarOrden();
		Ordenes.Add(CSaltar);
	}
}

void AGalaga_USFX_L01GameMode::EjecutarComandoDisparar()
{
	if (Emisor)
	{
		ANaveCaza* NaveCazaDisparo = GetWorld()->SpawnActor<ANaveCaza>(FVector(-500.0f, 0.0f, 150.0f), FRotator(0.0f, 0.0f, 0.0f));
		CDisparar = GetWorld()->SpawnActor<AComandoDeDisparo>(AComandoDeDisparo::StaticClass());
		Emisor->EstablecerOrden(CDisparar);
		Emisor->EjecutarOrden();
		Ordenes.Add(CDisparar);
	}
}

void AGalaga_USFX_L01GameMode::DeshacerComando()
{
	if (Ordenes.Num() > 0)
	{
		UltimaOrden = Ordenes.Pop();
		Emisor->EstablecerOrden(UltimaOrden);
		Emisor->DeshacerOrden();
	}
}
