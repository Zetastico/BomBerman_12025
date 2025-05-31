// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NavMesh/NavMeshBoundsVolume.h"
#include "Navi.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ANavi : public ANavMeshBoundsVolume
{
	GENERATED_BODY()
	
public:

	ANavi();

	virtual void BeginPlay();
};
