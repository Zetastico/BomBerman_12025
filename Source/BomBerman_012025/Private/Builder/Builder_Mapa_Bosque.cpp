// Fill out your copyright notice in the Description page of Project Settings.


#include "Builder/Builder_Mapa_Bosque.h"
#include "Factory/Mapa_Factory.h"
#include "Builder/Mapa_Producto.h" // <-- Asegúrate de incluir la cabecera correcta
// Sets default values
ABuilder_Mapa_Bosque::ABuilder_Mapa_Bosque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilder_Mapa_Bosque::BeginPlay()
{
	Super::BeginPlay();
	MapaConstruido = GetWorld()->SpawnActor<AMapa_Producto>(AMapa_Producto::StaticClass());

}

// Called every frame
void ABuilder_Mapa_Bosque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuilder_Mapa_Bosque::ConstruirMuros(FVector pos)
{

	if (!Fabrica || !MapaConstruido) return;
	MapaConstruido->AnadirBloque(Fabrica->CrearBloque("BloqueMuro", pos));
	return;

}

void ABuilder_Mapa_Bosque::ConstruirBloques(FVector pos)
{
	if (!Fabrica || !MapaConstruido) return;
	MapaConstruido->AnadirBloque(Fabrica->CrearBloque("BloqueMadera", pos));
	return;

}

void ABuilder_Mapa_Bosque::ConstruirPuertas(FVector pos)
{
	if (!Fabrica || !MapaConstruido) return;
	MapaConstruido->AnadirBloque(Fabrica->CrearBloque("BloquePuerta", pos));
	return;

}

void ABuilder_Mapa_Bosque::ConstruirObstaculos(FVector pos)
{
	if (!Fabrica || !MapaConstruido) return;
	//Creamos el bloqe y lo guardamos en el mapa construido
	MapaConstruido->AnadirBloque(Fabrica->CrearBloque("BloqueTitilante", pos));
	return;

}

AMapa_Producto* ABuilder_Mapa_Bosque::GetMapa()
{
	return MapaConstruido;
}

void ABuilder_Mapa_Bosque::SetFabrica(AMapa_Factory* NuevaFabrica)
{

	Fabrica = NuevaFabrica;

}

