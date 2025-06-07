// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloqueBase.h"
#include "Bloque_Muro.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloque_Muro : public ABloqueBase
{
	GENERATED_BODY()
	
public:

	ABloque_Muro();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;


	FVector StartLocation;
	FVector EndLocation;
	FVector TargetLocation;

	float MoveSpeed;
	float Tolerance;
protected:
	virtual void DestruirBloque();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque")
	float DestructionTime = 7.0f; // Tiempo en segundos antes de que el bloque se destruya
};
