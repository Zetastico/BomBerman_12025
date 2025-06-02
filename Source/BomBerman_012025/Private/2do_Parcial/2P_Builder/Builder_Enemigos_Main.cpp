// Fill out your copyright notice in the Description page of Project Settings.


#include "2do_Parcial/2P_Builder/Builder_Enemigos_Main.h"
#include "2do_Parcial/2P_Builder/Director_Enemigos.h"
#include "2do_Parcial/2P_Builder/Builder_Enemigos_1.h"

// Sets default values
ABuilder_Enemigos_Main::ABuilder_Enemigos_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilder_Enemigos_Main::BeginPlay()
{
	Super::BeginPlay();

	// Initialize the Director Builder
	DirectorBuilder = GetWorld()->SpawnActor<ADirector_Enemigos>(ADirector_Enemigos::StaticClass());
	BuilderEnemigos1 = GetWorld()->SpawnActor<ABuilder_Enemigos_1>(ABuilder_Enemigos_1::StaticClass());
	

	DirectorBuilder->EstablecerBuilder(BuilderEnemigos1);
	DirectorBuilder->ConstruirEnemigos(ArrayMapa1, 10);
	
}

// Called every frame
void ABuilder_Enemigos_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

