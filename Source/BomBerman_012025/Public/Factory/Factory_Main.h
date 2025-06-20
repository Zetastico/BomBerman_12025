// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueBase.h"
#include "Factory_Main.generated.h"
UCLASS()
class BOMBERMAN_012025_API AFactory_Main : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFactory_Main();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

    // Array de punteros a ABloqueBase
    TArray<ABloqueBase*> Bloques;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
