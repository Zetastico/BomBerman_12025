// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque_Prototype.generated.h"

UINTERFACE(MinimalAPI)
class UBloque_Prototype : public UInterface
{
	GENERATED_BODY()
};

class BOMBERMAN_012025_API IBloque_Prototype
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	virtual UBloque_Prototype* Clone(const FVector& NuevaPosicion) const = 0;
};

