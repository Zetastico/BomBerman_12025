// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloqueBase.h"
#include "Bloque_Puerta.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloque_Puerta : public ABloqueBase
{
	GENERATED_BODY()
	
public:

	ABloque_Puerta();

protected:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	float Timer;
	float Interval;

	FRotator TargetRotation;
	float RotationSpeed;
protected:
	virtual void DestruirBloque();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque")
	float DestructionTime = 7.0f; // Tiempo en segundos antes de que el bloque se destruya
};
