// Fill out your copyright notice in the Description page of Project Settings.


#include "State/Enemigo_State.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "NavigationSystem.h"
#include "Engine/TargetPoint.h"
#include "Navigation/PathFollowingComponent.h"
#include "DrawDebugHelpers.h"
#include "State/State_Patrullar.h"
#include "State/StateAtacar.h"

AEnemigo_State::AEnemigo_State()
{
    PrimaryActorTick.bCanEverTick = true;

    GetMesh()->SetHiddenInGame(true);

    Malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla"));
    Malla->SetupAttachment(RootComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> CuboMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (CuboMesh.Succeeded())
    {
        Malla->SetStaticMesh(CuboMesh.Object);
        Malla->SetRelativeLocation(FVector(0.0f, 0.0f, 40.0f));
        Malla->SetWorldScale3D(FVector(1.0f));
        Malla->SetCollisionObjectType(ECC_Pawn);
        Malla->SetCollisionResponseToAllChannels(ECR_Ignore);
        Malla->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
        Malla->SetGenerateOverlapEvents(true);
    }

    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    AIControllerClass = AAIController::StaticClass();

    GetCharacterMovement()->MaxWalkSpeed = 200.0f;

    EstadoActual = nullptr;
}

void AEnemigo_State::BeginPlay()  
{  
   Super::BeginPlay();  

   AIController = Cast<AAIController>(GetController());  
   PlayerActor = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);  

   Malla->OnComponentBeginOverlap.AddDynamic(this, &AEnemigo_State::OnOverlapJugador);  

   // Iniciar los estados y cambiar al estado de patrullaje al inicio
   
   Iniciar();
   // Fix: Ensure the type is specified correctly for the new instance of State_Patrullar  
   CambiarEstado(GetSPatrullar());  
}

void AEnemigo_State::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (EstadoActual) EstadoActual->Tick(DeltaTime);
}

void AEnemigo_State::IrAlSiguientePunto()
{
    if (PuntosDePatrulla.Num() == 0 || !AIController) return;

    ATargetPoint* PuntoActual = PuntosDePatrulla[IndicePatrullaActual];
    if (PuntoActual)
    {
        FAIMoveRequest MoveRequest;
        MoveRequest.SetGoalActor(PuntoActual);
        MoveRequest.SetAcceptanceRadius(5.0f);

        FPathFollowingRequestResult Resultado = AIController->MoveTo(MoveRequest);

        if (Resultado.Code != EPathFollowingRequestResult::Failed)
        {
            IndicePatrullaActual = (IndicePatrullaActual + 1) % PuntosDePatrulla.Num();
            bEsperando = false;
        }
    }
}

void AEnemigo_State::OnOverlapJugador(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor == PlayerActor)
    {
        UE_LOG(LogTemp, Warning, TEXT("¡El enemigo tocó al jugador!"));

        if (APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0))
        {
            PC->DisableInput(PC);
            UKismetSystemLibrary::QuitGame(GetWorld(), PC, EQuitPreference::Quit, true);
            bJugadorDetectado = false;
        }
    }
}

void AEnemigo_State::Iniciar()
{
    SAtacar = GetWorld()->SpawnActor<AStateAtacar>(AStateAtacar::StaticClass());
	if (SAtacar)
	{
		SAtacar->SetEnemigoState(this);
	}
	SPatrullar = GetWorld()->SpawnActor<AState_Patrullar>(AState_Patrullar::StaticClass());
	if (SPatrullar)
	{
		SPatrullar->SetEnemigoState(this);
	}
	//CambiarEstado(SPatrullar);
}

void AEnemigo_State::CambiarEstado(IState* NuevoEstado)
{
    EstadoActual = NuevoEstado;
	if (EstadoActual)
	{
		EstadoActual->Activar();
	}
}

IState* AEnemigo_State::GetSAtacar()
{
    return SAtacar;
}

IState* AEnemigo_State::GetSPatrullar()
{
    return SPatrullar;
}

