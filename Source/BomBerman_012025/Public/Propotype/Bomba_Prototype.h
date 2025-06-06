// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomba_Prototype.generated.h"

UINTERFACE(MinimalAPI)
class UBomba_Prototype : public UInterface
{
	GENERATED_BODY()
};

class BOMBERMAN_012025_API IBomba_Prototype
{
	GENERATED_BODY()
	
public:	
	//Metodo clonar que tendran las clases designadas
	virtual UBomba_Prototype* Clone() const = 0;
};
