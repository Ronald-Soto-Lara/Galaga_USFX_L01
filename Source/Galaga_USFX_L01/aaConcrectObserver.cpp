// Fill out your copyright notice in the Description page of Project Settings.


#include "aaConcrectObserver.h"
#include "Proteccion.h"
#include "Escolta.h"
#include "ArmarObserver.h"

// Sets default values
AaaConcrectObserver::AaaConcrectObserver()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/Meshes/PlayerShip1.PlayerShip1'"));
	MeshComp->SetStaticMesh(Mesh.Object);
	MeshComp->SetWorldScale3D(FVector(5.0f, 5.0f, 5.0f));
	arma = 0;
	escudo = 0;
	velocidad = 0;
	vida = 0;
	scoreee= 0;
	n = 0;
}

// Called when the game starts or when spawned
void AaaConcrectObserver::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AaaConcrectObserver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	scoreee+=1;
	if(scoreee== 100)
	{
		AgregarArsenal();
	}
	if(scoreee== 500)
	{
		DetenerObjeto();
	}
	if(scoreee== 100)
	{
		ReforzarBarreras();
	}
	if(scoreee== 500)
	{
		DestruirBarreras();
	}
}

void AaaConcrectObserver::AgregarArsenal()
{
	clasee = GetWorld()->SpawnActor<AEscolta>(FVector(0.0f,-200.0f, 150.0f), FRotator(180.0f, 0.0f, 0.0f));
	clasee1 = GetWorld()->SpawnActor<AEscolta>(FVector(0.0f, 200.0f, 150.0f), FRotator(180.0f, 0.0f, 0.0f));

	agregar1= GetWorld()->SpawnActor<AArmarObserver>();
	agregar2= GetWorld()->SpawnActor<AArmarObserver>();

	agregar1->Suscribir(this);
	agregar2->Suscribir(this);
}

void AaaConcrectObserver::DetenerObjeto()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("Objeto destruido"));
	agregar1->Desuscribir(this);
	agregar2->Desuscribir(this);
	clasee->Destroy();
	clasee1->Destroy();
}

void AaaConcrectObserver::ReforzarBarreras()
{
	BarreraObserver = GetWorld()->SpawnActor<AProteccion>(FVector(-300.0f, 0.0f, 150.0f), FRotator(0.0f, 0.0f, 0.0f));
	agregar3 = GetWorld()->SpawnActor<AArmarObserver>();
	agregar3->Suscribir(this);
}

void AaaConcrectObserver::DestruirBarreras()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("Objeto destruido"));
	agregar3->Desuscribir(this);
	BarreraObserver->Destroy();
}

void AaaConcrectObserver::Actualizar(AArmarObserver* Observer)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Se ha actualizado los subs"));
}

void AaaConcrectObserver::Destruir()
{
	Destroy();
}
