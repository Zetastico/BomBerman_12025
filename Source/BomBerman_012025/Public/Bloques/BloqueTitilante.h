// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloqueBase.h"
#include "BloqueTitilante.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueTitilante : public ABloqueBase
{
	GENERATED_BODY()

public:

	ABloqueTitilante();

protected:

    virtual void BeginPlay() override;

    void OcultarBloque();
    void MostrarBloque();

    UPROPERTY(EditAnywhere)
    float TiempoVisible = 4.0f;

    UPROPERTY(EditAnywhere)
    float TiempoInvisible = 4.0f;

    FTimerHandle TimerHandle_Disappear;
    FTimerHandle TimerHandle_Reappear;




	
};
