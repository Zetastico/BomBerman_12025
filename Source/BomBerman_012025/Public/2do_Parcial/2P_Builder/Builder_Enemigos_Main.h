// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Builder_Enemigos_Main.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABuilder_Enemigos_Main : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilder_Enemigos_Main();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere, Category = "Main")
	class ADirector_Enemigos* DirectorBuilder;

	UPROPERTY(VisibleAnywhere, Category = "Main")
	class ABuilder_Enemigos_1* BuilderEnemigos1;

	TArray<TArray<int>> ArrayMapa1 = {
									{4,4,4,4,4,4,4,4,4,4,4,4},
									{4,1,0,4,2,0,2,0,4,0,1,4},
									{4,0,0,3,0,0,0,0,3,0,0,4},
									{4,4,3,4,2,0,2,0,4,3,4,4},
									{4,0,0,0,0,0,2,0,1,1,2,4},
									{4,0,2,2,2,0,2,0,2,2,2,4},
									{4,0,0,0,1,0,1,0,0,0,0,4},
									{4,2,2,0,2,0,2,1,2,1,0,4},
									{4,0,0,3,0,0,0,0,3,0,0,4},
									{4,0,0,0,0,0,0,0,0,0,0,4},
									{4,0,0,0,0,0,0,0,0,0,0,4},
									{4,4,4,4,4,4,4,4,4,4,4,4} };
};
