// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "BombaBase.generated.h"
UCLASS()
class BOMBERMAN_012025_API ABombaBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABombaBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float TiempoParaExplotar = 2.0f;

	UPROPERTY(EditAnywhere)
	float RangoExplosion = 3;

	FTimerHandle TimerHandle_Explosion;

	UFUNCTION()
	void Explotar();

	void ExplorarEnDireccion(FVector Direccion);

protected:
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category = "FX")
	UNiagaraSystem* EfectoExplosion;
    
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
