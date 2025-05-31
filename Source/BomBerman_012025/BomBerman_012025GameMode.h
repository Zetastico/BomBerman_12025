// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Nav_Mesh_Bounds_Volum/Navi.h"
#include "BomBerman_012025GameMode.generated.h"
UCLASS(minimalapi)
class ABomBerman_012025GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomBerman_012025GameMode();

protected:

	virtual void BeginPlay() override;

	USoundBase* LevelMusic;

	TArray<TArray<int>> arrayMapaBloques2 = {
									{4,4,4,4,4,4,4,4,4,4,4,4},
									{4,0,0,0,2,0,2,0,0,0,0,4},
									{4,2,1,0,0,0,0,0,1,2,0,4},
									{4,0,1,0,2,0,2,0,0,0,0,4},
									{4,0,0,0,0,0,2,0,1,1,2,4},
									{4,0,2,2,2,0,2,0,2,2,2,4},
									{4,0,0,0,1,0,1,0,0,0,0,4},
									{4,2,2,0,2,0,2,1,2,1,0,4},
									{4,0,0,0,0,0,0,0,0,0,0,4},
									{4,0,0,0,0,0,0,0,0,0,0,4},
									{4,0,0,0,0,0,0,0,0,0,0,4},
									{4,4,4,4,4,4,4,4,4,4,4,4}};

};



