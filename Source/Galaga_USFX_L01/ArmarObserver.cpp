// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmarObserver.h"
#include "SuscriptorInterfaz.h"

// Sets default values
AArmarObserver::AArmarObserver()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	subs = 0;
	tiempo = 0;
	reecord = 0;
}

// Called when the game starts or when spawned
void AArmarObserver::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AArmarObserver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	reecord ++;
	tiempo++;
		if (tiempo >= 50)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::White, FString::Printf(TEXT("el numero de suscriptores es %d"), subs));
			tiempo = 0;
		}
}

void AArmarObserver::Suscribir(AActor* Suscribirse)
{
	Suscriptores.Add(Suscribirse);
	subs += 1;
	NotificarSubs();
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::White, FString::Printf(TEXT("el numero de suscriptores es %d"), subs));
}

void AArmarObserver::Desuscribir(AActor* Suscribirse)
{
	Suscriptores.Remove(Suscribirse);
	subs -= 1;
	NotificarSubs();
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::White, FString::Printf(TEXT("el numero de suscriptores es %d"), subs));
}

void AArmarObserver::NotificarSubs()
{
	for (AActor* Subs : Suscriptores) {
		Suscriptor = Cast<ISuscriptorInterfaz>(Subs);
		if (Suscriptor) {
			Suscriptor->Actualizar(this);
		}
	}
}