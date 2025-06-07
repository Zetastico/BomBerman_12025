// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Composite/Bloque_Base_Composite.h"
#include "Bloque_Simple.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloque_Simple : public ABloque_Base_Composite
{
    GENERATED_BODY()

public:

    ABloque_Simple();
    // Tipo del bloque (Sólido o Destructible)
    //Depende si se rompera o no
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque")
    FString Tipo;

	//Metodo que hereda de ABloque_Base_Composite
    virtual void AfectarPorExplosion() override;

    //Destruye el bloque
    void DestruirBloque();

protected:
	//Malla del bloque
	UStaticMeshComponent* Mesh;
	//Manejador del temporizador para la destrucción
    FTimerHandle TimerHandleExplosion;
	
};
