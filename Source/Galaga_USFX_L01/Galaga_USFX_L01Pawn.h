// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"	
#include "Bomba.h"
#include "Galaga_USFX_L01Pawn.generated.h"

UCLASS(Blueprintable)
class AGalaga_USFX_L01Pawn : public APawn
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* EnemyMesh;


public:
	AGalaga_USFX_L01Pawn();

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	FVector GunOffset;
	FVector GunOffset2;
	FVector PosicionInicio;


	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	//void CrearBarrera();
	//void SpawnBarrera();
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* SceneComponentBarrera;

protected:

	FTimerHandle TimerHandle_CrearBarrera;
	FTimerHandle BarreraTimerHandle;
	FTimerHandle DestruirBarrera;
	FTimerHandle TimerHandle_Salto;
	FTimerHandle TimerHandle_SoltarBomba;
	FTimerHandle DetonarBomba;
	// Begin Actor Interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	virtual void movIzq(float Value);
	virtual void movDer(float Value);
	virtual void movMIzq(float Value);
	virtual void movMDer(float Value);
	virtual void descender();
	virtual void CrearBarrera();
	virtual void ResetCrearBarrera();
	virtual void ActivarDobleDisparo();
	virtual void devolverAlPrincipio();
	virtual void soltarBomba();
	virtual void ResetSoltarBomba();
	virtual void Tick(float DeltaSeconds) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;
	//VARIABLES
	bool salto;
	bool caida;
	float JumpForce;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;
	bool Saltar;
	bool bIsJumping;
	bool bCrearBarr;
	bool disparoDoble;
	bool movimiento;
	bool soltBomb;
public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FTimerHandle TimerSpeed;
	FTimerHandle TDestroy;
public:
	//void scoreGameMode(int nuevoScore) { score = nuevoScore; }
	int Score;
	float velNave;
	float velNaveX;
	float velNaveY;
	float UbicacionInicioX;
	float UbicacionInicioY;
	float Puntaje;
	int RecordPawn;
	int Vida;
	UFUNCTION()
	virtual void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp,
	bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)override;
public:
	virtual void BeginPlay() override;
	virtual void Destruir();
	void Estados(FString _Estados);
	virtual void Salto();
	virtual void ModificarVida(FString ModificarVida, int _Vida);
	IEstados* Estado;
	IEstados* EstadoNormal;
	IEstados* EstadoLento;
	IEstados* EstadoInvisible;
	IEstados* EstadoInvencible;

	//Funciones pa cambiar los estados.
	FORCEINLINE void SetEstado(IEstados* _Estado);

	void PawnNormal();
	void PawnLenteado();
	void PawnInvisibiliando();
	void PawnInvenciblepapidios();
	void ResSpeed();
	void CambiarMallaPawn();

	//Funciones para obtener el estado.
	FORCEINLINE IEstados* N_ObtenerEstadoNormal();
	FORCEINLINE IEstados* N_ObtenerEstadoLento();
	FORCEINLINE IEstados* N_ObtenerEstadoInvisible();
	FORCEINLINE IEstados* N_ObtenerEstadoInvencible();
	FORCEINLINE IEstados* N_ObtenerEstadoActual();
	// ... más código ...
//public:
//
//	void Estrategia1();
//	void Estrategia2();
//	void Estrategia3();
//
//	class AStrategyConcrect* StrategyConcrect_1;
//	class AStrategyConcrect_1* StrategyConcrect_2;
//	class AStrategyConcrect_2* StrategyConcrect_3;
//
//private:
//	class ANaveEstrategy* naveEstrategy;
};