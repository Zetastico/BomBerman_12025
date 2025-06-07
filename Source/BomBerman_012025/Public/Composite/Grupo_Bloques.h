// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Composite/Bloque_Base_Composite.h"
#include "Grupo_Bloques.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API AGrupo_Bloques : public ABloque_Base_Composite
{
	GENERATED_BODY()
	
public:

    AGrupo_Bloques();

    //Bloques hijos que se afectan en cascada
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grupo")
    TArray<ABloque_Base_Composite*> Hijos;

	//Método que se llama para afectar por explosión
    virtual void AfectarPorExplosion() override;

	//Método para agregar un bloque al grupo
    UFUNCTION(BlueprintCallable, Category = "Grupo")
    void AgregarBloque(ABloque_Base_Composite* Bloque);

};
