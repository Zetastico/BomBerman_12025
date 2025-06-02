// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigos/Enemigo.h"
#include "Enemigo_Rapido.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API AEnemigo_Rapido : public AEnemigo
{
	GENERATED_BODY()

	AEnemigo_Rapido();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//Metodos
 // Función para ir al siguiente punto
	void IrAlSiguientePunto();

	//Editar
	void ReanudarPatrulla();

	//Editar
	static void ReiniciarDeteccion(UWorld* World);

	UFUNCTION()
	void OnOverlapJugador(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
