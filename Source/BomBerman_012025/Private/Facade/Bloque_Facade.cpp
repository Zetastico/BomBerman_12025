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

    // Primero creamos el componente de colisión y lo hacemos RootComponent
    TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    TriggerBox->SetBoxExtent(FVector(50, 50, 50));
    TriggerBox->SetCollisionProfileName("Trigger");
    RootComponent = TriggerBox;
    TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ABloque_Facade::OnOverlapBegin);

    // Luego creamos el mesh y lo atachamos al root (TriggerBox)
    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(RootComponent);

    // Asignamos la malla
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (MallaBloqueAsset.Succeeded())
    {
        Mesh->SetStaticMesh(MallaBloqueAsset.Object);
        Mesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
    }

    // Asignamos el material
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
    if (ObjetoMaterial.Succeeded())
    {
        Mesh->SetMaterial(0, ObjetoMaterial.Object);
    }

	// Desactivamos la colisión del mesh, ya que solo queremos que el TriggerBox detecte los overlaps
    Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ABloque_Facade::BeginPlay()
{
    Super::BeginPlay();
    //Creamos los actores Builder y Factory para este facade
    Builder = GetWorld()->SpawnActor<ABuilder_Main>(ABuilder_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
    Factory = GetWorld()->SpawnActor<AFactory_Main>(AFactory_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
}

//Metodo que se llama cuando comienza el overlap, osea cuando el jugador entra en el TriggerBox
void ABloque_Facade::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
	// Verificamos si el bloque ya ha sido activado para evitar múltiples activaciones
    if (!bActivado && OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
    {
		// Si no ha sido activado, activamos el bloque y llamamos al método correspondiente
        bActivado = true;
		//Se elije que nivel se activa de forma aleatoria entre facil, medio o dificil
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

//Metodos que activa el nivel facil, medio o dificil
//Esos metodos ya los tiene el builder
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

