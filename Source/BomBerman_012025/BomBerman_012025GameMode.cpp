// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomBerman_012025GameMode.h"
#include "BomBerman_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "Propotype/Bomba_Prototype.h"
#include "Propotype/Multi_bomba.h"
#include "Facade/Bloque_Facade.h"
#include "Builder/Builder_Main.h"
#include "Composite/Composite_Main.h"
#include "2do_Parcial/2P_Prototype/Bloque_Prototype.h"	
#include "2do_Parcial/2P_Prototype/P_Muro.h"
#include "2do_Parcial/2P_Prototype/P_Madera.h"
#include "2do_Parcial/2P_Prototype/P_Titilante.h"

ABomBerman_012025GameMode::ABomBerman_012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	static ConstructorHelpers::FObjectFinder<USoundBase> MusicAsset(TEXT("/Script/Engine.SoundWave'/Game/Audio/Beep_Block_Skyway__With_Beeps__-_Super_Mario_3D_World.Beep_Block_Skyway__With_Beeps__-_Super_Mario_3D_World'"));
	if (MusicAsset.Succeeded())
	{
		LevelMusic = MusicAsset.Object;
	}
}

void ABomBerman_012025GameMode::BeginPlay()
{
	Super::BeginPlay();

	if (LevelMusic)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), LevelMusic);
	}

	UWorld* World = GetWorld();
	if (World)
	{
		FActorSpawnParameters Params;
		FVector Posicion = FVector(1000, 1000, -10); // Donde quieras colocarla

		//-----------------------------------------------Facade------------------------------------------------
		// Spawneamos el bloque facade
		ABloque_Facade* BloqueFacade = World->SpawnActor<ABloque_Facade>(ABloque_Facade::StaticClass(), Posicion, FRotator::ZeroRotator, Params);


		//-----------------------------------------------Builder-----------------------------------------------
		//ABuilder_Main* Builder = World->SpawnActor<ABuilder_Main>(ABuilder_Main::StaticClass(), Posicion, FRotator::ZeroRotator, Params);
		//Builder->ConstrirMapaDificil();

		//-----------------------------------------------Prototype---------------------------------------------
		//Datos de la bomba
		FBombaData Datos;
		Datos.TiempoParaExplotar = 10.0f;
		Datos.RangoExplosion = 20.0f;
		FVector PosicionBomba = FVector(1100, 1100, -10); // Donde quieras colocarla
		//Spawneamos la bomba prototipo
		AMulti_Bomba* BombaPrototype = World->SpawnActor<AMulti_Bomba>(AMulti_Bomba::StaticClass(), Posicion, FRotator::ZeroRotator, Params);
		if (BombaPrototype)
		{
			//Aplicamos los nuevos datos a la bomba prototipo
			BombaPrototype->AplicarDatos(Datos);
			//Clonamos la bomba prototipo
			BombaPrototype->Clone();
		}

		//-----------------------------------------------Composite---------------------------------------------
		//Creamos el composite
		AComposite_Main* Composite = World->SpawnActor<AComposite_Main>(AComposite_Main::StaticClass(), Posicion, FRotator::ZeroRotator, Params);
		

		//-----------------------------------------------Factory-----------------------------------------------
		//Creamos el factory
		AFactory_Main* Factory = World->SpawnActor<AFactory_Main>(AFactory_Main::StaticClass(), Posicion, FRotator::ZeroRotator, Params);
		/*
				//-----------------------------------------------PROTOTYPE_2do Parcial------------------------------------------------
		//Posicion de los bloques prototipos
		FVector PosicionInicial = FVector(0, 0, 0);

		// Spawneamos los bloques prototipo
		AP_Muro* MuroPrototype = World->SpawnActor<AP_Muro>(AP_Muro::StaticClass(), PosicionInicial, FRotator::ZeroRotator, Params);
		AP_Madera* MaderaPrototype = World->SpawnActor<AP_Madera>(AP_Madera::StaticClass(), PosicionInicial, FRotator::ZeroRotator, Params);
		AP_Titilante* TitilantePrototype = World->SpawnActor<AP_Titilante>(AP_Titilante::StaticClass(), PosicionInicial, FRotator::ZeroRotator, Params);

		//Asignamos nuevos parametros a un prototipo
		TitilantePrototype->SetParametros(4.f, 4.0f, 2.0f, true);
		MaderaPrototype->SetParametros(2.0f);

		//Declaramos los clones
		AP_Titilante* ClonTitilante;
		AP_Madera* ClonMadera;
		AP_Muro* ClonMuro;

		if (!MuroPrototype) return;

		int opcion;

		TArray<TArray<int>> mapaOpciones;
		mapaOpciones.SetNum(arrayMapaBloques2.Num());
		for (int i = 0; i < arrayMapaBloques2.Num(); ++i)
		{
			mapaOpciones[i].SetNum(arrayMapaBloques2[i].Num());
		}

		//Mapa Aleatorio derecha
		for (int Fila = 0; Fila < arrayMapaBloques2.Num(); ++Fila)
		{
			for (int Columna = arrayMapaBloques2[Fila].Num() / 2; Columna < arrayMapaBloques2[Fila].Num(); ++Columna)
			{
				FVector NuevaPos = FVector(Fila * 200, Columna * 200, 0);

				opcion = FMath::RandRange(0, 4);
				mapaOpciones[Fila][Columna] = opcion;

				switch (opcion)
				{
				case 1:
					ClonTitilante = Cast<AP_Titilante>(TitilantePrototype->Clone(NuevaPos));
					break;
				case 2:
					ClonMadera = Cast<AP_Madera>(MaderaPrototype->Clone(NuevaPos));
					break;
				case 4:
					ClonMuro = Cast<AP_Muro>(MuroPrototype->Clone(NuevaPos));
					break;
				}
			}
		}

		//Mapa Clonado
		for (int Fila = 0; Fila < arrayMapaBloques2.Num(); ++Fila)
		{
			for (int Columna = 0; Columna < arrayMapaBloques2[Fila].Num() / 2; ++Columna)
			{
				FVector NuevaPos = FVector(Fila * 200, Columna * 200, 0);

				int ColumnaOrigen = Columna + arrayMapaBloques2[Fila].Num() / 2;
				opcion = mapaOpciones[Fila][ColumnaOrigen];

				mapaOpciones[Fila][Columna] = opcion;

				switch (opcion)
				{
				case 1:
					ClonTitilante = Cast<AP_Titilante>(TitilantePrototype->Clone(NuevaPos));
					break;
				case 2:
					ClonMadera = Cast<AP_Madera>(MaderaPrototype->Clone(NuevaPos));
					break;
				case 4:
					ClonMuro = Cast<AP_Muro>(MuroPrototype->Clone(NuevaPos));
					break;
				}
			}
		}
		MuroPrototype->SetActorLocation(FVector(0, 0, 0));
	}
		*/
	}

}