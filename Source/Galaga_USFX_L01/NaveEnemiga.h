// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h" //Incluye la definicion de la clase AActor para que los objetos puedan ser colocados en UE.
#include "MovimientoNaves.h"
#include "NaveEnemiga.generated.h"
class UstaticMeshComponent; //Definiendo la clase para generar un puntero (direccion de memoria).
//Declarando la case Enemy como abstracta.
UCLASS(abstract)
class GALAGA_USFX_L01_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	//UPPROPERTY es una Macro utilizada en UE para declarar propiedades de clases que pueden ser editadas en el motor grafico.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* EnemyMesh; //Asignamos a la Clase la propiedad 'EnemyMesh' como un puntero para asignar una representacion grafica a un objeto.

protected:
	//Propiedades generales de la clase.
	int ataque;
	float cadencia;
	int vida;
	FVector posicion;
	FVector desplazamiento;
	float velocidad;
	float destruir;
	float escapar;
	float ProjDist;
	bool ActDisparo;
	FVector GunOffset;
	FTimerHandle Timer_fin;
public:
	//Al ser propiedades protegidas es necesario crear metodos para poder leer (Get) y modificar (Set) las propiedades anteriores.
	FORCEINLINE int Getataque() const { return ataque; }
	FORCEINLINE float Getcadencia() const { return cadencia; }
	FORCEINLINE int Getvida() const { return vida; }
	FORCEINLINE FVector Getposicion() const { return posicion; }
	FORCEINLINE FVector Getdesplazamiento() const { return desplazamiento; }
	FORCEINLINE float Getvelocidad() const { return velocidad; }
	FORCEINLINE float Getdesrtuir() const { return destruir; }
	FORCEINLINE float Getescapar() const { return escapar; }

	FORCEINLINE void Setataque(int _ataque) { ataque = _ataque; }
	FORCEINLINE void Setcadencia(float _cadencia) { cadencia = _cadencia; }
	FORCEINLINE void Setvida(int _vida) { vida = _vida; }
	FORCEINLINE void Setposicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void Setdesplazamiento(FVector _desplazamiento) { desplazamiento = _desplazamiento; }
	FORCEINLINE void Setvelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void Setdestruir(float _destruir) { destruir = _destruir; }
	FORCEINLINE void Setescapar(float _escapar) { escapar = _escapar; }

public:
	ANaveEnemiga(); //Este consturctor al no tener implementacion no hace mas de lo que haria el constructor de la clase 'AActor' (la clase base de 'AEnemy')
	virtual void TReset_Proj();

protected:
	//Con 'virtual' se indica que puede proporcionar su propia implementacion.
	//Se utiliza Overeride para poder remplazar la implementacion base.
	virtual void BeginPlay() override;
public:
	//Esta funcion se llama en cada fotograma del juego (Tick) y es un metodo heredado de la clase 'AActor'.
	//Se introduce el dato 'DeltaTime' como el tiempo transcurrido desde el fotograma anterior.
	UPROPERTY(VisibleAnywhere);
	UMovimientoNaves* ComponenteMovimiento;
	virtual void Tick(float DeltaTime) override;

protected:
	//Declaraci�n de m�todos protegidos virtuales puros, esto indica que estos metodos no pueden se implementados por esta clase.
	//Dichos metodos solo pueden ser implementados por las Subclases.
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );//Se le pasa el parametro entero DeltaTime para poder calcular el tiempo entre fotogramas.
	void Disparar() PURE_VIRTUAL(ANaveEnemiga::Disparar, );
	void Velocidad() PURE_VIRTUAL(ANaveEnemiga::Velocidad, );
	void Vida() PURE_VIRTUAL(ANaveEnemiga::Vida, );
	void Apariencia() PURE_VIRTUAL(ANaveEnemiga::Apariencia, );
	void Destruir() PURE_VIRTUAL(ANaveEnemiga::Destruir, );
};