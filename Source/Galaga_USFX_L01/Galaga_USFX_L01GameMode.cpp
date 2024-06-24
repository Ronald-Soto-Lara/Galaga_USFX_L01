// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveTransporte.h"
#include "NaveTransporte_1.h"
#include "NaveTransporte_2.h"
#include "NaveCaza.h"
#include "NaveCaza_1.h"
#include "NaveCaza_2.h"
#include "NaveEspia.h"
#include "NaveEspia_1.h"
#include "NaveEspia_2.h"
#include "NaveNodriza.h"
#include "NaveNodriza_1.h"
#include "NaveNodriza_2.h"
#include "NaveReabastecimiento.h"
#include "NaveReab_1.h"
#include "NaveReab_2.h"
#include "NaveAleatoriaAcuatica.h"
#include "NaveAlatoriaAerea.h"
#include "NaveAleatoriaTerrestre.h"
#include "Director_NJ.h"
#include "ConstruirNaveJefe.h"
#include "NaveJefe_Nivel_1.h"
#include "NaveJefe_Nivel_2.h"
#include "NaveJefe_Nivel_3.h"
#include "EscuadronesFacade.h"
#include "Components/SceneComponent.h"
#include "EscudoEscena.h"
#include "ClaseExtra.h"
#include "EstadoBase.h"
#include "EstadoLento.h"
#include "EstadoInvisible.h"
#include "EstadoInvencible.h"
#include "CapsulaEstate.h"
#include "Calculator.h"
#include "aaConcrectObserver.h"
#include "LetreroBienvenida.h"
#include "NaveEstrategy.h"
#include "NavesCucarachas.h"
#include "ComandoDeSalto.h"
#include "ComandoDeDisparo.h"
#include "ReceptorDeOrdenes.h"
#include "EmisorDeOrdenes.h"
#include "Capsula.h"
#include "ImplementationConcrect.h"
#include "ImplementationConcrect_1.h"
#include "TimerManager.h"


AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	Ordenes = TArray<AActor*>();
	temp = 0;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
	naves = true;
	TimeDay = 0.0f;
	HUDClass = ALetreroBienvenida::StaticClass();
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
	/*EstadoLento->PawnLento();*/

	/*calculadora = GetWorld()->SpawnActor<ACalculator>(ACalculator::StaticClass());*/
	/*Observer->EstablecerTiempo(calculadora);*/
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		ANaveEstrategy* NaveStrategy_0 = World->SpawnActor<ANaveEstrategy>(ANaveEstrategy::StaticClass());
		if (NaveStrategy_0)
		{
			ANaveEstrategy*NaveEstrategy = GetWorld()->SpawnActor<ANaveEstrategy>(FVector(-400.0f, 200.0f, 150.0f), FRotator(180.0f, 0.0f, 0.0f));
			ANaveEstrategy*NaveEstrategy_1 = GetWorld()->SpawnActor<ANaveEstrategy>(FVector(-400.0f, 0.0f, 150.0f), FRotator(180.0f, 0.0f, 0.0f));
			ANaveEstrategy*NaveEstrategy_2 = GetWorld()->SpawnActor<ANaveEstrategy>(FVector(-400.0f, -200.0f, 150.0f), FRotator(180.0f, 0.0f, 0.0f));
		}
		/*AaaConcrectObserver* Observer = World->SpawnActor<AaaConcrectObserver>();*/
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
	//if (RECORD == 100)
	//{
	//	Capsula->EstablecerPersonaje(Bridge1);
	//	Capsula->VerificarCapsulaConsumida("consumida", 5.0f);
	//	Capsula->TiposCapsulas("Salto");
	//	Capsula->EmplearCapsula();
	//}
	//if (RECORD == 150)
	//{
	//	Capsula->EstablecerPersonaje(Bridge2);
	//	Capsula->VerificarCapsulaConsumida("consumida", 10.0f);
	//	Capsula->TiposCapsulas("Vida");
	//	Capsula->EmplearCapsula();
	//}
	///*if(RECORD == 200)
	//{
	//	Capsula->EstablecerPersonaje(Bridge2);
	//	Capsula->VerificarCapsulaConsumida("noconsumida", 15.0f);
	//	Capsula->TiposCapsulas("Fuerza");
	//	Capsula->EmplearCapsula();
	//}*/

	//Patrón Command
	if (RECORD == 300)
	{
		EjecutarComandoDisparar();
	}
	if (RECORD == 400)
	{
		DeshacerComando();
	}
	if (RECORD == 500)
	{
		/*EjecutarComandoSaltar();*/
	}
	if (RECORD == 600)
	{
		DeshacerComando();
	}

	//Patrón State
	if (RECORD == 1600)
	{
		EstadoInvisible = GetWorld()->SpawnActor<AEstadoInvisible>(AEstadoInvisible::StaticClass());
		EstadoInvisible->PawnInvisible();
	}
	if (RECORD == 2000)
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
