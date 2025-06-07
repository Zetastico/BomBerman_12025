// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloqueBase.h"
#include "Bloque_Madera.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloque_Madera : public ABloqueBase
{
	GENERATED_BODY()

public:

	ABloque_Madera();

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
	float DestructionTime = 5.0f; // Tiempo en segundos antes de que el bloque se destruya

};
