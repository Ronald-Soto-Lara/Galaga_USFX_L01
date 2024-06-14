// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCaza.h"
#include "ProyectilEnemigo.h"

ANaveCaza::ANaveCaza() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh>ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza5.Nodriza5'"));
	SetActorRelativeScale3D(FVector(0.4f, 0.4f, 0.4f));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	ActDisparo = true;
	cadencia = 1.0f;
}

void ANaveCaza::Mover(float DeltaTime) {
	velocidad = 1.0f;
	SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z));
	/*FVector PActual = GetActorLocation(); //Obtenemos la posicion actual del objeto.
	float NewX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad; //Generamos un numero aleatorio para la nueva posicion en el eje X.
	float NewY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad; //Generamos un numero aleatorio para la nueva posicion en el eje Y.
	FVector PFinal = FVector(PActual.X + NewX,PActual.Y + NewY,PActual.Z); //Generamos un vector con las nuevas coordenadas.
	SetActorLocation(PFinal); //Establecemos la nueva posicion del objeto.*/
}

void ANaveCaza::Ataque() {
}

void ANaveCaza::Vida() {

}

void ANaveCaza::Bombardear() {

}


void ANaveCaza::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	//FVector SpawnPLocation = GetActorLocation() + (GetActorForwardVector() * 1);
	//if (ActDisparo == true)
	//{
	//	UWorld* World = GetWorld();
	//	if (World)
	//	{
	//		AProyectilEnemigo* NewProj = World->SpawnActor<AProyectilEnemigo>(SpawnPLocation+FVector(0.0f,0.0f,150.0f), FRotator::ZeroRotator);
	//	}
	//	//Activa el temporizador para el siguiente disparo.
	//	World->GetTimerManager().SetTimer(Timer_fin, this, &ANaveEnemiga::TReset_Proj, cadencia);
	//	ActDisparo = false; //Desactiva el disparo para que no se dispare continuamente.
	//}
}

void ANaveCaza::Disparar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("La Nave Caza ha disparado"));
	FVector SpawnPLocation = FVector(0.0f, 0.0f, 0.0f);
	if (ActDisparo == true)
	{
		UWorld* World = GetWorld();
		if (World)
		{
			AProyectilEnemigo* NewProj = World->SpawnActor<AProyectilEnemigo>(SpawnPLocation + FVector(0.0f, 0.0f, 150.0f), FRotator::ZeroRotator);
		}
		World->GetTimerManager().SetTimer(Timer_fin, this, &ANaveCaza::DeshacerDisparo, cadencia);
	}
}

void ANaveCaza::DeshacerDisparo()
{
	ActDisparo = false;
}

void ANaveCaza::DeshacerSalto()
{
}
