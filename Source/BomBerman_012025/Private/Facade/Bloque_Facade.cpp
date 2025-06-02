// Fill out your copyright notice in the Description page of Project Settings.


#include "Facade/Bloque_Facade.h"
#include "Components/BoxComponent.h"
#include "Engine/World.h"
#include "Factory/Factory_Main.h"
#include "Factory/Bomba_Factory.h"
#include "Builder/Builder_Main.h"
#include "GameFramework/Character.h"
ABloque_Facade::ABloque_Facade()
{
    PrimaryActorTick.bCanEverTick = false;

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

    Mesh->SetupAttachment(RootComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

    if (Mesh) {
        Mesh->SetStaticMesh(MallaBloqueAsset.Object);
        Mesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
    }
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
    if (ObjetoMaterial.Succeeded())
    {
        Mesh->SetMaterial(0, ObjetoMaterial.Object);
    }
    TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    RootComponent = TriggerBox;
    TriggerBox->SetBoxExtent(FVector(50, 50, 50));
    TriggerBox->SetCollisionProfileName("Trigger");
    TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ABloque_Facade::OnOverlapBegin);
	
}

void ABloque_Facade::BeginPlay()
{
    Super::BeginPlay();
    Builder = GetWorld()->SpawnActor<ABuilder_Main>(ABuilder_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
    Factory = GetWorld()->SpawnActor<AFactory_Main>(AFactory_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
}

void ABloque_Facade::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
    if (!bActivado && OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
    {
        bActivado = true;
        int32 RandomNumber = FMath::RandRange(1, 3);
        switch (RandomNumber)
        {
        case 1:
            Activar_Nivel_Facil();
            break;
		case 2:
			Activar_Nivel_Medio();
			break;
		case 3:
			Activar_Nivel_Dificil();
            break;
		default:
            break;
        }
    }
}

void ABloque_Facade::Activar_Nivel_Facil()
{
	
	Builder->ConstrirMapaFacil();
}

void ABloque_Facade::Activar_Nivel_Medio()
{
	Builder->ConstrirMapaMedio();
}

void ABloque_Facade::Activar_Nivel_Dificil()
{
	Builder->ConstrirMapaDificil();
}

