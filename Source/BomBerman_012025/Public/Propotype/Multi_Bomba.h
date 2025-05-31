// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomba_Prototype.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "Multi_Bomba.generated.h"
UCLASS()
class BOMBERMAN_012025_API AMulti_Bomba : public AActor, public IBomba_Prototype
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMulti_Bomba();

	virtual UBomba_Prototype* Clone() const override;

	void ConfigurarBomba(float NuevoTiempo, float NuevoRango);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float TiempoParaExplotar = 5.0f;

	UPROPERTY(EditAnywhere)
	float RangoExplosion = 5;

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
