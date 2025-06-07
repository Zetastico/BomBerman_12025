// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque_Base_Composite.generated.h"

UCLASS(Abstract)
class BOMBERMAN_012025_API ABloque_Base_Composite : public AActor
{
	GENERATED_BODY()
	
public:

	//Metodo para afectar por explosión que aplicamos a los bloques concretos
	UFUNCTION(BlueprintCallable, Category = "Explosión")
	virtual void AfectarPorExplosion();

};
