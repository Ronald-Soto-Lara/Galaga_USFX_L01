// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCaza_1.h"

ANaveCaza_1::ANaveCaza_1() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveCaza_1::Mover(float DeltaTime) {
	velocidad = 0.25;//Establecemos la velocidad ya heredada de la clase 'AEnemy' abstracta.
	//SetActorLoacation y GetActorLocation son metodos usador por UE para con Set obtener y con Get establecer la posicion de un objeto.
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}
void ANaveCaza_1::Ataque() {

}
void ANaveCaza_1::Vida() {

}
void ANaveCaza_1::Bombardear() {

}
void ANaveCaza_1::Escudo() {

}
void ANaveCaza_1::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}