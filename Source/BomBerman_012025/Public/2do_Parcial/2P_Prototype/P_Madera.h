// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "2do_Parcial/2P_Prototype/Bloque_Prototype.h"
#include "P_Madera.generated.h"
UCLASS()
class BOMBERMAN_012025_API AP_Madera : public AActor, public IBloque_Prototype
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AP_Madera();

	//Metodo para clonar los bloques de tipo muro
	//Viene de la interfaz IBloque_Prototype
	virtual UBloque_Prototype* Clone(const FVector& NuevaPosicion) const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Malla del bloque
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	//Tamano del bloque
	float tamanoBloque;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Metodo para establecer los parametros del bloque clonado
	void SetParametroClon(const AP_Madera* OtroBloque);
	//Metodo para establecer los parametros del bloque
	void SetParametros(float tamano);
};
