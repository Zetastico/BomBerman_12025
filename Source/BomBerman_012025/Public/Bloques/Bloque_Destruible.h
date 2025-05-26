// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloqueBase.h"
#include "Bloque_Destruible.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloque_Destruible : public ABloqueBase
{
	GENERATED_BODY()

public:

	ABloque_Destruible();

protected:

	virtual void BeginPlay() override;
	
};
