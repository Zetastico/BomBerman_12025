// Fill out your copyright notice in the Description page of Project Settings.


#include "Builder/Director_Builder.h"
#include "Builder/Mapa_Producto.h"
#include "Builder/Builder_Mapa.h"
#include "Factory/Mapa_Factory.h"

// Sets default values
ADirector_Builder::ADirector_Builder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirector_Builder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirector_Builder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirector_Builder::ConstruirMapa(TArray<TArray<int>> Mapa)
{
	if (BuilderMapa) //Check if BuilderMapa is not null
	{
		

		AMapa_Factory* Fabrica = GetWorld()->SpawnActor<AMapa_Factory>();
		BuilderMapa->SetFabrica(Fabrica);

		for (int i = 0; i < Mapa.Num(); i++) {
			for (int j = 0; j < Mapa[i].Num(); j++) {
				switch (Mapa[i][j]) {
				case 0:
					break;	
				case 1:
					//Block
					BuilderMapa->ConstruirBloques(FVector(i * 200, 150.0f + j * 200, -10.0f));
					break;
				case 2:
					//Door
					BuilderMapa->ConstruirPuertas(FVector(i * 200, 150.0f + j * 200, -10.0f));
					break;
				case 3:
					//Obstacle
					BuilderMapa->ConstruirObstaculos(FVector(i * 200, 150.0f + j * 200, -10.0f));
					break;
				case 4:
					//Wall
					BuilderMapa->ConstruirMuros(FVector(i * 200, 150.0f + j * 200, -10.0f));
					break;
				}
				
			}
		}
		//Call the methods of the Builder
		

		
	}
	else //Log if the Builder is NULL
	{
		UE_LOG(LogTemp, Error, TEXT("BuilderMapa is NULL"));
	}
}

void ADirector_Builder::EstablecerBuilder(AActor* Builder_Mapa)
{
	BuilderMapa = Cast<IBuilder_Mapa>(Builder_Mapa);
	if (!BuilderMapa) //Log Error if cast fails
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to cast to IBuilder_Mapa"));
	}

}

AMapa_Producto* ADirector_Builder::GetMapa()
{
	if (BuilderMapa)
	{
		//Returns the Lodging of the Builder
		return BuilderMapa->GetMapa();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetLodging(): Return nullptr"));
	return nullptr;

}

