// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Builder/Builder_Main.h"
#include "Factory/Factory_Main.h"
#include "Bloque_Facade.generated.h"
UCLASS()
class BOMBERMAN_012025_API ABloque_Facade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloque_Facade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AFactory_Main* Factory;
	ABuilder_Main* Builder;

private:
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* TriggerBox;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	void Activar_Nivel_Facil();
	void Activar_Nivel_Medio();
	void Activar_Nivel_Dificil();

	bool bActivado = false;  // En el .h

	UStaticMeshComponent* Mesh;
};
