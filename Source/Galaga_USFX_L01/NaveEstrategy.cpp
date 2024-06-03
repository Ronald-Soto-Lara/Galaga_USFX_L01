// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEstrategy.h"
#include "Estrategy.h"


// Sets default values
ANaveEstrategy::ANaveEstrategy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshCompa = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Meshes/EnemyLevel1.EnemyLevel1'"));
	MeshCompa->SetStaticMesh(MeshAsset.Object);
	MeshCompa->SetWorldScale3D(FVector(2.5f, 2.5f, 2.5f));
	recordNave = 0;
}

// Called when the game starts or when spawned
void ANaveEstrategy::BeginPlay()
{
	Super::BeginPlay();
	/*Estrategia___1();*/
	/*Estrategia___1();
	Estrategia___2();
	Estrategia___3();*/
}

// Called every frame
void ANaveEstrategy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	recordNave+=2;
	if(recordNave == 100)
	{
		Estrategia___1();
	}
	if(recordNave == 200)
	{
		Estrategia___2();
	}
	if(recordNave == 300)
	{
		Estrategia___3();
	}
}

void ANaveEstrategy::SetEstrategia(AActor* _Estrategia)
{
	Estrategia = Cast<IEstrategy>(_Estrategia);
}

void ANaveEstrategy::UsarEstrategia()
{
	if (Estrategia) {
		Estrategia->EjecutarTarea();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("No se ha asignado una estrategia"));
	}
}

void ANaveEstrategy::Estrategia___1()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("se ha llamado a la clase"));
	Estrategia_1 = GetWorld()->SpawnActor<AStrategyConcrect>(AStrategyConcrect::StaticClass());
	SetEstrategia(Estrategia_1);
	UsarEstrategia();
	Estrategia_1->Destroy();
}

void ANaveEstrategy::Estrategia___2()
{
	Estrategia_2 = GetWorld()->SpawnActor<AStrategyConcrect_1>(AStrategyConcrect_1::StaticClass());
	SetEstrategia(Estrategia_2);
	UsarEstrategia();
	Estrategia_2->Destroy();
}

void ANaveEstrategy::Estrategia___3()
{
	Estrategia_3 = GetWorld()->SpawnActor<AStrategyConcrect_2>(AStrategyConcrect_2::StaticClass());
	SetEstrategia(Estrategia_3);
	UsarEstrategia();
	Estrategia_3->Destroy();
}
//void AStrategyConcrect::TReset_Projectile()
//{
//	ActDisparo = true;
//}