// Fill out your copyright notice in the Description page of Project Settings.


#include "Observer/Bloque_Trampa.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"

ABloque_Trampa::ABloque_Trampa()
{
    // Primero creamos el componente de colisión y lo hacemos RootComponent
    TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    TriggerBox->SetBoxExtent(FVector(50, 50, 50));
    TriggerBox->SetCollisionProfileName("Trigger");
    RootComponent = TriggerBox;
    TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ABloque_Trampa::OnOverlapBegin);

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

void ABloque_Trampa::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    // Verificamos si el bloque ya ha sido activado para evitar múltiples activaciones
    if (!bActivado && OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
    {
        // Si no ha sido activado, activamos el bloque y llamamos al método correspondiente
        bActivado = true;
        //Se elije que nivel se activa de forma aleatoria entre facil, medio o dificil
		NotificarSubs();
    }
}
