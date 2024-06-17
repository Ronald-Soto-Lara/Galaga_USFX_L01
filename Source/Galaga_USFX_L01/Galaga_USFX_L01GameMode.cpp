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


	//Patron Bridge
	Bridge1 = GetWorld()->SpawnActor<AImplementationConcrect>(AImplementationConcrect::StaticClass());
	Bridge2 = GetWorld()->SpawnActor<AImplementationConcrect_1>(AImplementationConcrect_1::StaticClass());
	Capsula = GetWorld()->SpawnActor<ACapsula>(ACapsula::StaticClass());


	/*FVector ubicacionInicioNavesEnemigasCaza = FVector(-500.0f, -500.0f, 150.0f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(0.0f, 0.0f, 150.0f);
	FVector ubicacionInicioNavesEnemigasReabastecimiento = FVector(500.0f, 500.0f, 150.0f);
	FVector NaveAleatoriaAcuaticaUbicacion = FVector(-1000.0f, 0.0f, 150.0f);
	FVector NaveAleatoriaAereaUbicacion = FVector(-1200.0f, 0.0f, 700.0f);
	FVector NaveAleatoriaTerrestreUbicacion = FVector(-1400.0f, 0.0f, 150.0f);
	FVector PosicionBala = FVector(-500.0f, 0.0f, 150.0f);
	FVector PosicionColision = FVector(-500.0f, 0.0f, 150.0f);
	FRotator Rotacioncolision = FRotator(0.0f, 0.0f, 0.0f);
	FRotator RotacionBala = FRotator(0.0f, 0.0f, 0.0f);
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);*/
	/*calculadora = GetWorld()->SpawnActor<ACalculator>(ACalculator::StaticClass());*/
	/*Observer->EstablecerTiempo(calculadora);*/
	UWorld* const World = GetWorld();
	/*int a = 350;
	int b = -450;
	int c = 0;	*/
	if (World != nullptr)
	{
		/*for (int i = 2; i<=6; i+=2) {
		ANaveEstrategy* NaveEstrategy = World->SpawnActor<ANaveEstrategy>((FVector(-400.0f, -400.0f, 150.0f)+FVector(0.0f,i*100.0f,0.0f)), FRotator(-180.0f, 0.0f, 0.0f));
		}*/
		ANavesCucarachas* NavesCucarachas = World->SpawnActor<ANavesCucarachas>(ANavesCucarachas::StaticClass());
		Naves = GetWorld()->SpawnActor<AEscuadronesFacade>(AEscuadronesFacade::StaticClass());
		/*ANaveEstrategy* NaveStrategy_0 = World->SpawnActor<ANaveEstrategy>(ANaveEstrategy::StaticClass());
		if (NaveStrategy_0)
		{
			ANaveEstrategy*NaveEstrategy = GetWorld()->SpawnActor<ANaveEstrategy>(FVector(-400.0f, 200.0f, 150.0f), FRotator(180.0f, 0.0f, 0.0f));
			ANaveEstrategy*NaveEstrategy_1 = GetWorld()->SpawnActor<ANaveEstrategy>(FVector(-400.0f, 0.0f, 150.0f), FRotator(180.0f, 0.0f, 0.0f));
			ANaveEstrategy*NaveEstrategy_2 = GetWorld()->SpawnActor<ANaveEstrategy>(FVector(-400.0f, -200.0f, 150.0f), FRotator(180.0f, 0.0f, 0.0f));
		}*/
		/*ANaveEstrategy* NaveEstrategy_1 = World->SpawnActor<ANaveEstrategy>(FVector(-400.0f, 0.0f, 150.0f), FRotator(-180.0f, 0.0f, 0.0f));
		ANaveEstrategy* NaveEstrategy_2 = World->SpawnActor<ANaveEstrategy>(FVector(-400.0f, 200.0f, 150.0f), FRotator(-180.0f, 0.0f, 0.0f));*/
		/*AaaConcrectObserver* Observer = World->SpawnActor<AaaConcrectObserver>();*/
		/*ACapsulaEstate* Capsula = World->SpawnActor<ACapsulaEstate>(FVector(-1000.0f, 0.0f, 150.0f), FRotator(0.0f, 0.0f, 0.0f));*/
		/*AClaseExtra* ClaseExtra = World->SpawnActor<AClaseExtra>(FVector(-300.0f, 0.0f, 150.0f), FRotator(0.0f, 0.0f, 0.0f)); */
		/*AaaConcrectObserver*Observer2 = World->SpawnActor<AaaConcrectObserver>(FVector(0.0f, 0.0f, 150.0f), FRotator(0.0f, 90.0f, 0.0f));*/
		ANaveCaza* NaveCaza = World->SpawnActor<ANaveCaza>(FVector(0.0f, 0.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));
		//ANaveReabastecimiento* NaveColision = World->SpawnActor<ANaveReabastecimiento>(PosicionColision, Rotacioncolision);
		//Naves = GetWorld()->SpawnActor<AEscuadronesFacade>(AEscuadronesFacade::StaticClass());
		//Naves->CrearEscuadrones(1);
		/*Naves->CrearEsc_2();
		Naves->CrearEsc_3();
		Naves->CrearEsc_4();
		Naves->CrearEsc_5();*/
		/*FTimerDelegate TimerDel;
		int32 RandomNumber = FMath::RandRange(0, 2);*/

		/*TArray<TSubclassOf<ANaveEnemiga>> claseNave = {
		ANaveCaza_1::StaticClass(), ANaveCaza_2::StaticClass(),
		ANaveEspia_1::StaticClass(),ANaveEspia_2::StaticClass(),
		ANaveNodriza_1::StaticClass(),ANaveNodriza_2::StaticClass(),
		ANaveReab_1::StaticClass(),ANaveReab_2::StaticClass(),
		ANaveTransporte_1::StaticClass(),ANaveTransporte_2::StaticClass() };

		FVector InicialSpawnLocation = FVector(-350.f, -450.f, 150.f);

		for (int i = 0; i < 30; i++)
		{
				TSubclassOf<ANaveEnemiga> ClaseRandom = claseNave[FMath::RandRange(0, claseNave.Num() - 1)];
				FVector SpawnLocation = InicialSpawnLocation + FVector(a, b, 0.f);
				FRotator SpawnRotation = FRotator::ZeroRotator;
				ANaveEnemiga* NuevaNaveSpawn = GetWorld()->SpawnActor<ANaveEnemiga>(ClaseRandom, SpawnLocation, SpawnRotation);
				b = b + 300;
				c = c + 1;
			if (c == 6) {
				c = 0;
				a = a+300;
				b = -450;
			}
		}*/
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

	////Patrón Command
	//if (RECORD == 300)
	//{
	//	EjecutarComandoDisparar();
	//}
	//if (RECORD == 400)
	//{
	//	DeshacerComando();
	//}
	//if (RECORD == 500)
	//{
	//	EjecutarComandoSaltar();
	//}
	//if (RECORD == 600)
	//{
	//	DeshacerComando();
	//}

	////Patrón Builder
	//if (RECORD == 700)
	//{
	//	Jefe = GetWorld()->SpawnActor<ANaveJefe_Nivel_1>(ANaveJefe_Nivel_1::StaticClass());
	//	Director = GetWorld()->SpawnActor<ADirector_NJ>(ADirector_NJ::StaticClass());
	//	Director->ConstruirBaseJefe(Jefe);
	//	Director->ConstruirSegundoPisoJefe();
	//}
	//if (RECORD == 800)
	//{
	//	Jefe_2 = GetWorld()->SpawnActor<ANaveJefe_Nivel_2>(ANaveJefe_Nivel_2::StaticClass());
	//	Director->ConstruirBaseJefe(Jefe_2);
	//	Director->ConstruirTiradoresJefe();
	//}
	//if (RECORD == 900)
	//{
	//	Jefe_3 = GetWorld()->SpawnActor<ANaveJefe_Nivel_3>(ANaveJefe_Nivel_3::StaticClass());
	//	Director->ConstruirBaseJefe(Jefe_3);
	//	Director->ConstruirCantBalasJefe();
	//}

	////Patrón Facade
	//if (RECORD == 1000)
	//{
	//	Naves->CrearEscuadrones(1);
	//}
	//if (RECORD == 1100)
	//{
	//	Naves->CrearEscuadrones(2);
	//}
	//if (RECORD == 1200)
	//{
	//	Naves->CrearEscuadrones(3);
	//}
	//if (RECORD == 1300)
	//{
	//	Naves->CrearEscuadrones(4);
	//}
	//if (RECORD == 1400)
	//{
	//	Naves->CrearEscuadrones(5);
	//}

	//Patrón State
	if (RECORD == 150)
	{
		EstadoLento = GetWorld()->SpawnActor<AEstadoLento>(AEstadoLento::StaticClass());
		EstadoLento->PawnLento();
	}
	if (RECORD == 160)
	{
		EstadoInvisible = GetWorld()->SpawnActor<AEstadoInvisible>(AEstadoInvisible::StaticClass());
		EstadoInvisible->PawnInvisible();
	}
	if (RECORD == 170)
	{
		EstadoInvencible = GetWorld()->SpawnActor<AEstadoInvencible>(AEstadoInvencible::StaticClass());
		EstadoInvencible->PawnInvencible();
	}
	if (RECORD == 180)
	{
		EstadoBase = GetWorld()->SpawnActor<AEstadoBase>(AEstadoBase::StaticClass());
		EstadoBase->PawnNormal();
	}
	/*EstadoPawn = Jugador->GetEstadoActual();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Tiempo: %f"), time));
	if (time >= 0.0f)
	{
		NaveEstrategica->CambiarEstrategia(EstNavEstandar);
		NaveEstrategica->AplicarEstrategia(DeltaTime);
	}
	if (time >= 15.0f)
	{
		NaveEstrategica->CambiarEstrategia(EstNavIntimidacion);
		NaveEstrategica->AplicarEstrategia(DeltaTime);
	}
	if (time >= 30.0f)
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
		if (naves)
		{
			ActTiempo();
			naves = false;
		}
	}
	TimeDay += DeltaTime;
	////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(
	//	TEXT("Hora del dia: %f"), TimeDay));
}

int x = 0;

void AGalaga_USFX_L01GameMode::CrearNaves()
{
	int z = 1;
	naves = false;
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		//FVector NaveAleatoriaAcuaticaUbicacion = FVector(-1000.0f, 0.0f, 150.0f);
		//FVector NaveAleatoriaAereaUbicacion = FVector(-1200.0f, 0.0f, 700.0f);
		//FVector NaveAleatoriaTerrestreUbicacion = FVector(-1400.0f, 0.0f, 150.0f);

		//FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
		//if (x < 3) {
		//	FTimerDelegate TimerDel;
		//	int32 RandomNumber = FMath::RandRange(1, 3);
		//	//haz el codigo para que despues de 3 segndos de elimine el letrero de bienvenida

		//	if (RandomNumber == 1)
		//	{
		//		ANaveAleatoriaAcuatica* NaveAleatoriaAcuaticaTemp = World->SpawnActor<ANaveAleatoriaAcuatica>(NaveAleatoriaAcuaticaUbicacion, rotacionNave);
		//		TimerDel.BindLambda([NaveAleatoriaAcuaticaTemp]()
		//			{
		//				if (NaveAleatoriaAcuaticaTemp && NaveAleatoriaAcuaticaTemp->IsValidLowLevel())
		//				{
		//					NaveAleatoriaAcuaticaTemp->Destroy();
		//				}
		//			});
		//		GetWorld()->GetTimerManager().SetTimer(EliminarNaveAcuatica, TimerDel, 10.0f, false);
		//		naves = true;
		//		x++;
		//	}
		//	else if (RandomNumber == 2)
		//	{
		//		ANaveAlatoriaAerea* NaveAleatoriaAereaTemp = World->SpawnActor<ANaveAlatoriaAerea>(NaveAleatoriaAereaUbicacion, rotacionNave);
		//		TimerDel.BindLambda([NaveAleatoriaAereaTemp]()
		//			{
		//				if (NaveAleatoriaAereaTemp && NaveAleatoriaAereaTemp->IsValidLowLevel())
		//				{
		//					NaveAleatoriaAereaTemp->Destroy();
		//				}
		//			});
		//		GetWorld()->GetTimerManager().SetTimer(EliminarNaveAerea, TimerDel, 10.0f, false);
		//		naves = true;
		//		x++;
		//	}
		//	else if (RandomNumber == 3)
		//	{
		//		ANaveAleatoriaTerrestre* NaveAleatoriaTerrestreTemp = World->SpawnActor<ANaveAleatoriaTerrestre>(NaveAleatoriaTerrestreUbicacion, rotacionNave);
		//		TimerDel.BindLambda([NaveAleatoriaTerrestreTemp]()
		//			{
		//				if (NaveAleatoriaTerrestreTemp && NaveAleatoriaTerrestreTemp->IsValidLowLevel())
		//				{
		//					NaveAleatoriaTerrestreTemp->Destroy();
		//				}
		//			});
		//		GetWorld()->GetTimerManager().SetTimer(EliminarNaveTerrestre, TimerDel, 10.0f, false);
		//		naves = true;
		//		x++;
		//	}
		//}
		/*FTimerDelegate TimerDel;
		Director_nj = World->SpawnActor<ADirector_NJ>();
		if (z == 1)
		{
			ANaveJefe_Nivel_1* va = World->SpawnActor<ANaveJefe_Nivel_1>();
			AEscuadronApoyo* j = Director_nj->getEscAPoyoooooo(va);
			TimerDel.BindLambda([va]()
				{
					if (va && va->IsValidLowLevel())
					{
						va->Destroy();
					}
				});
			GetWorld()->GetTimerManager().SetTimer(EliminarNaveAerea, TimerDel, 10.0f, false);
			naves = true;
			z++;
		}
		if (z == 2)
		{
			ANaveJefe_Nivel_2* ve = World->SpawnActor<ANaveJefe_Nivel_2>();
			AEscuadronApoyo* k = Director_nj->getEscAPoyoooooo(ve);
		}*/
	}
}
void AGalaga_USFX_L01GameMode::ActTiempo() {
	FTimerHandle TimerDel1;
	GetWorldTimerManager().SetTimer(TimerDel1, this, &AGalaga_USFX_L01GameMode::CrearNaves, 11.0f, false);
	//naves = true;
}

void AGalaga_USFX_L01GameMode::CrearEstate()
{
	/*AEstadoBase* EstadosBase = GetWorld()->SpawnActor<AEstadoBase>();
	AEstadoLento* EstadosLento = GetWorld()->SpawnActor<AEstadoLento>();
	AEstadoInvisible* EstadosInvisible = GetWorld()->SpawnActor<AEstadoInvisible>();
	AEstadoInvencible* EstadosInvencible = GetWorld()->SpawnActor<AEstadoInvencible>();
		int32 one = FMath::RandRange(1, 4);
		if (one == 1) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Estado Lento"));
			EstadosLento->PawnLento();
		}
		if (one == 2) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Estado Invisible"));
			EstadosInvisible->PawnInvisible();
		}
		if (one == 3) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Estado Invencible"));
			EstadosInvencible->PawnInvencible();
		}
		if (one == 4) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Estado Normal"));
			EstadosBase->PawnNormal();
		}*/
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
