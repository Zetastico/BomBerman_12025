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

//Construye el mapa fácil
void ABuilder_Main::ConstrirMapaFacil()
{
	//Crea el director
	DirectorBuilder = GetWorld()->SpawnActor<ADirector_Builder>(ADirector_Builder::StaticClass());
	//Crea el builder especifico para el mapa de bosque
	BuilderMapaBosque = GetWorld()->SpawnActor<ABuilder_Mapa_Bosque>(ABuilder_Mapa_Bosque::StaticClass());
	//Crea la fabrica de enemigos
	FabricaEnemigo = GetWorld()->SpawnActor<AEnemigo_Factory>(AEnemigo_Factory::StaticClass());

	//Asignamos el builder y fabrica a nuestro director
	DirectorBuilder->EstablecerBuilder(BuilderMapaBosque, FabricaEnemigo);
	//Le decimos a nuestro director que construya el mapa con un array especifico y cantidad de enemigos
	DirectorBuilder->ConstruirMapa(ArrayMapa1, 5);

	//Nos devuelve el producto de nuestro builder, que es nuestro mapa
	AMapa_Producto* MapaProducto = DirectorBuilder->GetMapa();
}

//Construye el mapa medio
void ABuilder_Main::ConstrirMapaMedio()
{
	//Crea el director
	DirectorBuilder = GetWorld()->SpawnActor<ADirector_Builder>(ADirector_Builder::StaticClass());
	//Crea el builder especifico para el mapa de bosque
	BuilderMapaBosque = GetWorld()->SpawnActor<ABuilder_Mapa_Bosque>(ABuilder_Mapa_Bosque::StaticClass());
	//Crea la fabrica de enemigos
	FabricaEnemigo = GetWorld()->SpawnActor<AEnemigo_Factory>(AEnemigo_Factory::StaticClass());

	//Asignamos el builder y fabrica a nuestro director
	DirectorBuilder->EstablecerBuilder(BuilderMapaBosque, FabricaEnemigo);
	//Le decimos a nuestro director que construya el mapa con un array especifico y cantidad de enemigos
	DirectorBuilder->ConstruirMapa(ArrayMapa2, 10);

	//Nos devuelve el producto de nuestro builder, que es nuestro mapa
	AMapa_Producto* MapaProducto = DirectorBuilder->GetMapa();
}

//Construye el mapa Dificl
void ABuilder_Main::ConstrirMapaDificil()
{
	//Crea el director
	DirectorBuilder = GetWorld()->SpawnActor<ADirector_Builder>(ADirector_Builder::StaticClass());
	//Crea el builder especifico para el mapa de bosque
	BuilderMapaBosque = GetWorld()->SpawnActor<ABuilder_Mapa_Bosque>(ABuilder_Mapa_Bosque::StaticClass());
	//Crea la fabrica de enemigos
	FabricaEnemigo = GetWorld()->SpawnActor<AEnemigo_Factory>(AEnemigo_Factory::StaticClass());

	//Asignamos el builder y fabrica a nuestro director
	DirectorBuilder->EstablecerBuilder(BuilderMapaBosque, FabricaEnemigo);
	//Le decimos a nuestro director que construya el mapa con un array especifico y cantidad de enemigos
	DirectorBuilder->ConstruirMapa(ArrayMapa3, 20);

	//Nos devuelve el producto de nuestro builder, que es nuestro mapa
	AMapa_Producto* MapaProducto = DirectorBuilder->GetMapa();
}

