// Fill out your copyright notice in the Description page of Project Settings.


#include "LetreroBienvenida.h"
#include "Engine/Canvas.h"
#include "TimerManager.h"

ALetreroBienvenida::ALetreroBienvenida()
{
	PrimaryActorTick.bCanEverTick = true;
	TamanoTexto = 2.5f;
}

void ALetreroBienvenida::DrawHUD()
{
	Super::DrawHUD();
	FString mensaje = "BIENVENIDO A GALAGA";
	FVector2D Tamano;
	GetTextSize(mensaje, Tamano.X, Tamano.Y, GEngine->GetSmallFont(), TamanoTexto);
	DrawText(mensaje, FColor::Purple, (Canvas->SizeX - Tamano.X) / 2, (Canvas->SizeY - Tamano.Y) / 2, GEngine->GetSmallFont(), TamanoTexto);
}

void ALetreroBienvenida::WIN_GAME()
{
	FString mensaje = "HAS GANADO";
	FVector2D Tamano;
	GetTextSize(mensaje, Tamano.X, Tamano.Y, GEngine->GetSmallFont(), TamanoTexto);
	DrawText(mensaje, FColor::Purple, (Canvas->SizeX - Tamano.X) / 2, (Canvas->SizeY - Tamano.Y) / 2, GEngine->GetSmallFont(), TamanoTexto);
}

//void ALetreroBienvenida::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//	GetWorldTimerManager().SetTimer(EliminarLetrero, this, &ALetreroBienvenida::Destroy, 5.0f, false);
//}