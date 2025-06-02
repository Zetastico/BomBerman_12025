// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomBerman_012025GameMode.h"
#include "BomBerman_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "Propotype/Bomba_Prototype.h"
#include "Propotype/Multi_bomba.h"

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
		FBombaData Datos;
		Datos.TiempoParaExplotar = 10.0f;
		Datos.RangoExplosion = 200.0f;
		FActorSpawnParameters Params;
		FVector Posicion = FVector(1000, 1000, 100); // Donde quieras colocarla

		AMulti_Bomba* BombaPrototype = World->SpawnActor<AMulti_Bomba>(AMulti_Bomba::StaticClass(), Posicion, FRotator::ZeroRotator, Params);
		if (BombaPrototype)
		{
			BombaPrototype->AplicarDatos(Datos);
			BombaPrototype->Clone();
		}

	}

}