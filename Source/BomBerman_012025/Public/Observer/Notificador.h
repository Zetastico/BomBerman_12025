// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Notificador.generated.h"

UCLASS()
class BOMBERMAN_012025_API ANotificador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANotificador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//The Subscribers of this Publisher
	UPROPERTY()
	TArray<AActor*> Subscribers = TArray<AActor*>();

public:
	//Add the pased Subscriber to the list
	virtual void Subscribir(AActor* Subscriptor);
	//Remove the passed Subscriber from the list
	virtual void DeSubscribir(AActor* SubscriptorRemover);
	//Notify all the Subscribers that something has changed
	virtual void NotificarSubs();

};
