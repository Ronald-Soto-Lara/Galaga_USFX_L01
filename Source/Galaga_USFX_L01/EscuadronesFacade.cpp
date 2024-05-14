// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "NaveCaza.h"
#include "NaveCaza_1.h"
#include "NaveCaza_2.h"
#include "NaveReab_1.h"
#include "NaveReab_2.h"
#include "EscuadronesFacade.h"

// Sets default values
AEscuadronesFacade::AEscuadronesFacade()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEscuadronesFacade::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEscuadronesFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEscuadronesFacade::CrearEsc_1()
{
	TArray<TSubclassOf<ANaveEnemiga>> TipoNaves;
	TMap<TSubclassOf<ANaveEnemiga>, int> MaxNav;

	TArray<TSubclassOf<ANaveEnemiga>> TipoNaves1;
	TMap<TSubclassOf<ANaveEnemiga>, int> MaxNav1;

	TArray<TSubclassOf<ANaveEnemiga>> TipoNaves2;
	TMap<TSubclassOf<ANaveEnemiga>, int> MaxNav2;

	TArray<TSubclassOf<ANaveEnemiga>> TipoNaves3;
	TMap<TSubclassOf<ANaveEnemiga>, int> MaxNav3;

	TArray<TSubclassOf<ANaveEnemiga>> TipoNaves4;
	TMap<TSubclassOf<ANaveEnemiga>, int> MaxNav4;

	TipoNaves.Add(ANaveCaza::StaticClass());
	MaxNav.Add(ANaveCaza::StaticClass(), 7);

	TipoNaves1.Add(ANaveCaza_1::StaticClass());
	MaxNav1.Add(ANaveCaza_1::StaticClass(), 7);

	TipoNaves2.Add(ANaveCaza_2::StaticClass());
	MaxNav2.Add(ANaveCaza_2::StaticClass(), 7);

	TipoNaves3.Add(ANaveReab_1::StaticClass());
	MaxNav3.Add(ANaveReab_1::StaticClass(), 7);

	TipoNaves4.Add(ANaveReab_2::StaticClass());
	MaxNav4.Add(ANaveReab_2::StaticClass(), 7);

	FVector Posicion = FVector(0.0f, -1000.0f, 250.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		for (int i = 0; i < 3; i++) {
			//Numero de Naves por fila.
			for (int j = 0; j < 3; j++) {
				//Recordemos declarar a 'TipoNavAlea' como referencia de las subclases de 'AEnemy'.
				TSubclassOf<ANaveEnemiga>TipoNavAlea = TipoNaves[FMath::RandRange(0, TipoNaves.Num() - 1)];//Esto asigna una nave aleatoria de nuestro array de naves.
				//Verificamos si el Tmap tiene la llave (TipoNavAlea) que recordemos que es una subclase especifica de 'Enemy'.
				//Contains es un metodo que se llama en un TMap para verificar si contiene una clave específica (TipoNavAlea).
				if (MaxNav.Contains(TipoNavAlea)) {
					int NavesGeneradas = MaxNav[TipoNavAlea];//Asignanos la nave aleatoria como un entero a la variable 'NavesGeneradas'.
					if (NavesGeneradas > 0) {
						FVector PActualNaves = FVector(Posicion.X + i * 150, Posicion.Y + j * 105, Posicion.Z);//Esto solo controla la distancia entre las naves
						ANaveEnemiga* NavesInst = World->SpawnActor<ANaveEnemiga>(TipoNavAlea, PActualNaves, Rotacion);//Esto spawnea las naves en el mundo.
						Enemigos.Push(NavesInst);//Esto añade las naves al array de enemigos.
						NavesGeneradas--;//Cada vez que se crea una nave, se reduce el contador de naves disponibles para ese tipo.
					}
				}
			}
		}
	}
}

void AEscuadronesFacade::CrearEsc_2()
{
	TArray<TSubclassOf<ANaveEnemiga>> TipoNaves1;
	TMap<TSubclassOf<ANaveEnemiga>, int> MaxNav1;
	TipoNaves1.Add(ANaveCaza_1::StaticClass());
	MaxNav1.Add(ANaveCaza_1::StaticClass(), 7);
	FVector Posicion = FVector(-500.0f, -500.0f, 250.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		ANaveEnemiga* ENEMY_NAV = World->SpawnActor<ANaveEnemiga>(Posicion, Rotacion);
		for (int i = 0; i < 3; i++) {
			//Numero de Naves por fila.
			for (int j = 0; j < 3; j++) {
				//Recordemos declarar a 'TipoNavAlea' como referencia de las subclases de 'AEnemy'.
				TSubclassOf<ANaveEnemiga>TipoNavAlea = TipoNaves1[FMath::RandRange(0, TipoNaves1.Num() - 1)];//Esto asigna una nave aleatoria de nuestro array de naves.
				//Verificamos si el Tmap tiene la llave (TipoNavAlea) que recordemos que es una subclase especifica de 'Enemy'.
				//Contains es un metodo que se llama en un TMap para verificar si contiene una clave específica (TipoNavAlea).
				if (MaxNav1.Contains(TipoNavAlea)) {
					int NavesGeneradas = MaxNav1[TipoNavAlea];//Asignanos la nave aleatoria como un entero a la variable 'NavesGeneradas'.
					if (NavesGeneradas > 0) {
						FVector PActualNaves = FVector(Posicion.X + i * 150, Posicion.Y + j * 105, Posicion.Z);//Esto solo controla la distancia entre las naves
						ANaveEnemiga* NavesInst = World->SpawnActor<ANaveEnemiga>(TipoNavAlea, PActualNaves, Rotacion);//Esto spawnea las naves en el mundo.
						Enemigos.Push(NavesInst);//Esto añade las naves al array de enemigos.
						NavesGeneradas--;//Cada vez que se crea una nave, se reduce el contador de naves disponibles para ese tipo.
					}
				}
			}
		}
	}
}

void AEscuadronesFacade::CrearEsc_3()
{
	TArray<TSubclassOf<ANaveEnemiga>> TipoNaves2;
	TMap<TSubclassOf<ANaveEnemiga>, int> MaxNav2;
	TipoNaves2.Add(ANaveCaza_2::StaticClass());
	MaxNav2.Add(ANaveCaza_2::StaticClass(), 7);
	FVector Posicion = FVector(0.0f, 0.0f, 250.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		ANaveEnemiga* ENEMY_NAV = World->SpawnActor<ANaveEnemiga>(Posicion, Rotacion);
		for (int i = 0; i < 3; i++) {
			//Numero de Naves por fila.
			for (int j = 0; j < 3; j++) {
				//Recordemos declarar a 'TipoNavAlea' como referencia de las subclases de 'AEnemy'.
				TSubclassOf<ANaveEnemiga>TipoNavAlea = TipoNaves2[FMath::RandRange(0, TipoNaves2.Num() - 1)];//Esto asigna una nave aleatoria de nuestro array de naves.
				//Verificamos si el Tmap tiene la llave (TipoNavAlea) que recordemos que es una subclase especifica de 'Enemy'.
				//Contains es un metodo que se llama en un TMap para verificar si contiene una clave específica (TipoNavAlea).
				if (MaxNav2.Contains(TipoNavAlea)) {
					int NavesGeneradas = MaxNav2[TipoNavAlea];//Asignanos la nave aleatoria como un entero a la variable 'NavesGeneradas'.
					if (NavesGeneradas > 0) {
						FVector PActualNaves = FVector(Posicion.X + i * 150, Posicion.Y + j * 105, Posicion.Z);//Esto solo controla la distancia entre las naves
						ANaveEnemiga* NavesInst = World->SpawnActor<ANaveEnemiga>(TipoNavAlea, PActualNaves, Rotacion);//Esto spawnea las naves en el mundo.
						Enemigos.Push(NavesInst);//Esto añade las naves al array de enemigos.
						NavesGeneradas--;//Cada vez que se crea una nave, se reduce el contador de naves disponibles para ese tipo.
					}
				}
			}
		}
	}
}

void AEscuadronesFacade::CrearEsc_4()
{
	TArray<TSubclassOf<ANaveEnemiga>> TipoNaves3;
	TMap<TSubclassOf<ANaveEnemiga>, int> MaxNav3;
	TipoNaves3.Add(ANaveReab_1::StaticClass());
	MaxNav3.Add(ANaveReab_1::StaticClass(), 7);
	FVector Posicion = FVector(-500.0f, 500.0f, 250.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		ANaveEnemiga* ENEMY_NAV = World->SpawnActor<ANaveEnemiga>(Posicion, Rotacion);
		for (int i = 0; i < 3; i++) {
			//Numero de Naves por fila.
			for (int j = 0; j < 3; j++) {
				//Recordemos declarar a 'TipoNavAlea' como referencia de las subclases de 'AEnemy'.
				TSubclassOf<ANaveEnemiga>TipoNavAlea = TipoNaves3[FMath::RandRange(0, TipoNaves3.Num() - 1)];//Esto asigna una nave aleatoria de nuestro array de naves.
				//Verificamos si el Tmap tiene la llave (TipoNavAlea) que recordemos que es una subclase especifica de 'Enemy'.
				//Contains es un metodo que se llama en un TMap para verificar si contiene una clave específica (TipoNavAlea).
				if (MaxNav3.Contains(TipoNavAlea)) {
					int NavesGeneradas = MaxNav3[TipoNavAlea];//Asignanos la nave aleatoria como un entero a la variable 'NavesGeneradas'.
					if (NavesGeneradas > 0) {
						FVector PActualNaves = FVector(Posicion.X + i * 150, Posicion.Y + j * 105, Posicion.Z);//Esto solo controla la distancia entre las naves
						ANaveEnemiga* NavesInst = World->SpawnActor<ANaveEnemiga>(TipoNavAlea, PActualNaves, Rotacion);//Esto spawnea las naves en el mundo.
						Enemigos.Push(NavesInst);//Esto añade las naves al array de enemigos.
						NavesGeneradas--;//Cada vez que se crea una nave, se reduce el contador de naves disponibles para ese tipo.
					}
				}
			}
		}
	}
}

void AEscuadronesFacade::CrearEsc_5()
{
	TArray<TSubclassOf<ANaveEnemiga>> TipoNaves4;
	TMap<TSubclassOf<ANaveEnemiga>, int> MaxNav4;
	TipoNaves4.Add(ANaveReab_2::StaticClass());
	MaxNav4.Add(ANaveReab_2::StaticClass(), 7);
	FVector Posicion = FVector(0.0f, 1000.0f, 250.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		ANaveEnemiga* ENEMY_NAV = World->SpawnActor<ANaveEnemiga>(Posicion, Rotacion);
		for (int i = 0; i < 3; i++) {
			//Numero de Naves por fila.
			for (int j = 0; j < 3; j++) {
				//Recordemos declarar a 'TipoNavAlea' como referencia de las subclases de 'AEnemy'.
				TSubclassOf<ANaveEnemiga>TipoNavAlea = TipoNaves4[FMath::RandRange(0, TipoNaves4.Num() - 1)];//Esto asigna una nave aleatoria de nuestro array de naves.
				//Verificamos si el Tmap tiene la llave (TipoNavAlea) que recordemos que es una subclase especifica de 'Enemy'.
				//Contains es un metodo que se llama en un TMap para verificar si contiene una clave específica (TipoNavAlea).
				if (MaxNav4.Contains(TipoNavAlea)) {
					int NavesGeneradas = MaxNav4[TipoNavAlea];//Asignanos la nave aleatoria como un entero a la variable 'NavesGeneradas'.
					if (NavesGeneradas > 0) {
						FVector PActualNaves = FVector(Posicion.X + i * 150, Posicion.Y + j * 105, Posicion.Z);//Esto solo controla la distancia entre las naves
						ANaveEnemiga* NavesInst = World->SpawnActor<ANaveEnemiga>(TipoNavAlea, PActualNaves, Rotacion);//Esto spawnea las naves en el mundo.
						Enemigos.Push(NavesInst);//Esto añade las naves al array de enemigos.
						NavesGeneradas--;//Cada vez que se crea una nave, se reduce el contador de naves disponibles para ese tipo.
					}
				}
			}
		}
	}
}