// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCaza.h"

ANaveCaza::ANaveCaza() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> 
	ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
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
}