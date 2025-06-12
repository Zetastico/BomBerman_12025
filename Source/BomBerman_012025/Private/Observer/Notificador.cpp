// Fill out your copyright notice in the Description page of Project Settings.


#include "Observer/Notificador.h"
#include "Observer/Suscriptor.h"
// Sets default values
ANotificador::ANotificador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANotificador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANotificador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANotificador::Subscribir(AActor* Subscriptor)
{
	//Add the passed Subscriber
	Subscribers.Add(Subscriptor);
}

void ANotificador::DeSubscribir(AActor* SubscriptorRemover)
{
	//Remove the passed Subscriber
	Subscribers.Remove(SubscriptorRemover);

}

void ANotificador::NotificarSubs()
{
	//Loop for each Subscriber
	for (AActor* Actor : Subscribers)
	{
		//Agarra a cada subscriptor y lo castea a ISuscriptor
		ISuscriptor* Sub = Cast<ISuscriptor>(Actor);
		if (Sub)
		{
			//Notifica que ocurrió un cambio
				Sub->Update(this);
		}
	}

}

