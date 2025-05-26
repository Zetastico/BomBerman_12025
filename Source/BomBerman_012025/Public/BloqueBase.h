// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueBase.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloqueBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UStaticMeshComponent* Mesh;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque")
	bool bEsDestructible = true;
};
