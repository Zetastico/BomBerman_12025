// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Observer/Notificador.h"
#include "Bloque_Trampa.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloque_Trampa : public ANotificador
{
	GENERATED_BODY()
	
public:

	ABloque_Trampa();

private:
	UPROPERTY(VisibleAnywhere)
	// Componente de colisión que detecta el overlap
	class UBoxComponent* TriggerBox;

	// Método que se llama cuando comienza el overlap
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	UStaticMeshComponent* Mesh;
	// Variable para controlar si el bloque ya ha sido activado
	bool bActivado = false;
};
