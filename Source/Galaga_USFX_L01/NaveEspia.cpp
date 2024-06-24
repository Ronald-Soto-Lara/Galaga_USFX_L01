// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEspia.h"
#include "ProyectilEnemigo_2.h"
#include "FabricaDeProyectiles.h"

ANaveEspia::ANaveEspia() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(0.40f, 0.40f, 0.40f));
	recordCaza = 0;
}
void ANaveEspia::Mover(float DeltaTime) {
	velocidad = 1.0f;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}
void ANaveEspia::Vida() {

}
void ANaveEspia::Ataque() {

}
void ANaveEspia::Ocultar() {

}
void ANaveEspia::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	recordCaza++;
	if (recordCaza * 1 == 20) {
		Disparar();
		recordCaza = 0;
	}
}

void ANaveEspia::Disparar()
{
	AFabricaDeProyectiles* Fabrica = GetWorld()->SpawnActor<AFabricaDeProyectiles>(AFabricaDeProyectiles::StaticClass());
	//este for hace que dsipare cada nave en las 4 direcciones
	for (int i = 1; i < 5; i++)
	{
		switch (i)
		{
			case 1:
				Fabrica->FabricarProyectil("Proyectil_2", GetActorLocation()+FVector(1000.0f,0.0f,0.0f), FRotator(180.0f, 0.0f, 0.0f));
				break;
			case 2:
				Fabrica->FabricarProyectil("Proyectil_2", GetActorLocation() + FVector(-1000.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
				break;
			case 3:
				Fabrica->FabricarProyectil("Proyectil_2", GetActorLocation() + FVector(0.0f, -1000.0f, 0.0f), FRotator(0.0f, 90.0f, 0.0f));
				break;
			case 4:
				Fabrica->FabricarProyectil("Proyectil_2", GetActorLocation() + FVector(0.0f, 1000.0f, 0.0f), FRotator(0.0f, 270.0f, 0.0f));
				break;
		}
	}
}
