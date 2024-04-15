// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCaza_2.h"
#include "Bomba.h"

ANaveCaza_2::ANaveCaza_2() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	BombaDist = 100.0f;
}
void ANaveCaza_2::Mover(float DeltaTime) {
	velocidad = 1.0f;

	static float TiempoInicio = GetWorld()->GetTimeSeconds();
	float DesplazamientoVertical = FMath::Sin(GetWorld()->GetTimeSeconds() - TiempoInicio) * velocidad;

	FVector NewLocation = GetActorLocation();
	NewLocation.Y += DesplazamientoVertical;

	SetActorLocation(NewLocation);
}
void ANaveCaza_2::Ataque() {

}
void ANaveCaza_2::Vida() {

}
void ANaveCaza_2::Bombardear() {

}
void ANaveCaza_2::Cargar_Sbomba() {

}
void ANaveCaza_2::Super_Bomba() {

	FVector SpawnEsc = GetActorLocation() + GetActorForwardVector() * BombaDist;

	ABomba* Bombita = GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass(), SpawnEsc, GetActorRotation());
	int aleNum = FMath::RandRange(0, 10);
	if (aleNum == 6) {
		GetWorld()->GetTimerManager().SetTimer(BombaActivar, this, &ANaveCaza_2::Super_Bomba, 10.0f, true);
	}
	GetWorld()->GetTimerManager().SetTimer(BombaDesactivar, [Bombita]()
		{
			if (Bombita)
			{
				Bombita->Destroy();
			}
		}, 6.0f, true);
}

void ANaveCaza_2::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
void ANaveCaza_2::BeginPlay() {
	Super::BeginPlay();
	Super_Bomba();
}