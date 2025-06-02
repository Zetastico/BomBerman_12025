// Fill out your copyright notice in the Description page of Project Settings.


#include "Builder/Builder_Main.h"
#include "Builder/Mapa_Producto.h"
#include "Builder/Director_Builder.h"
#include "Builder/Builder_Mapa_Bosque.h"
#include "Factory/Enemigo_Factory.h"
// Sets default values
ABuilder_Main::ABuilder_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilder_Main::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABuilder_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuilder_Main::ConstrirMapaFacil()
{
	// Initialize the Director Builder
	DirectorBuilder = GetWorld()->SpawnActor<ADirector_Builder>(ADirector_Builder::StaticClass());
	BuilderMapaBosque = GetWorld()->SpawnActor<ABuilder_Mapa_Bosque>(ABuilder_Mapa_Bosque::StaticClass());
	FabricaEnemigo = GetWorld()->SpawnActor<AEnemigo_Factory>(AEnemigo_Factory::StaticClass());

	DirectorBuilder->EstablecerBuilder(BuilderMapaBosque, FabricaEnemigo);
	DirectorBuilder->ConstruirMapa(ArrayMapa1, 5);


	AMapa_Producto* MapaProducto = DirectorBuilder->GetMapa();
}

void ABuilder_Main::ConstrirMapaMedio()
{
	// Initialize the Director Builder
	DirectorBuilder = GetWorld()->SpawnActor<ADirector_Builder>(ADirector_Builder::StaticClass());
	BuilderMapaBosque = GetWorld()->SpawnActor<ABuilder_Mapa_Bosque>(ABuilder_Mapa_Bosque::StaticClass());
	FabricaEnemigo = GetWorld()->SpawnActor<AEnemigo_Factory>(AEnemigo_Factory::StaticClass());


	DirectorBuilder->EstablecerBuilder(BuilderMapaBosque, FabricaEnemigo);
	DirectorBuilder->ConstruirMapa(ArrayMapa2, 10);


	AMapa_Producto* MapaProducto = DirectorBuilder->GetMapa();
}

void ABuilder_Main::ConstrirMapaDificil()
{
	// Initialize the Director Builder
	DirectorBuilder = GetWorld()->SpawnActor<ADirector_Builder>(ADirector_Builder::StaticClass());
	BuilderMapaBosque = GetWorld()->SpawnActor<ABuilder_Mapa_Bosque>(ABuilder_Mapa_Bosque::StaticClass());
	FabricaEnemigo = GetWorld()->SpawnActor<AEnemigo_Factory>(AEnemigo_Factory::StaticClass());


	DirectorBuilder->EstablecerBuilder(BuilderMapaBosque, FabricaEnemigo);
	DirectorBuilder->ConstruirMapa(ArrayMapa3, 20);


	AMapa_Producto* MapaProducto = DirectorBuilder->GetMapa();
}

