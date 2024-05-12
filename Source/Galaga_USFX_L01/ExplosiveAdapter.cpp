// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosiveAdapter.h"

// Sets default values
AExplosiveAdapter::AExplosiveAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AExplosiveAdapter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExplosiveAdapter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AExplosiveAdapter::Explosive()
{
}

