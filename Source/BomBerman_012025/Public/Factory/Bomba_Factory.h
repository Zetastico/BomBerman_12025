// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Propotype/Bomba_Prototype.h"
#include "Bomba_Factory.generated.h"
UCLASS()
class BOMBERMAN_012025_API ABomba_Factory : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABomba_Factory();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	IBomba_Prototype* CrearBomba(FVector Posicion, FString Tipo);
	
};
