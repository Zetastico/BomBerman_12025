#include "Enemigos/Enemigo_Comandante.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "NavigationSystem.h"
#include "Engine/TargetPoint.h"
#include "Navigation/PathFollowingComponent.h"
#include "DrawDebugHelpers.h"

AEnemigo_Comandante::AEnemigo_Comandante()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear el componente raíz
    GetMesh()->SetHiddenInGame(true);

    // Crear la malla estática
    Malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla"));
    Malla->SetupAttachment(RootComponent);

    // Configurar la malla estática
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CuboMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (CuboMesh.Succeeded())
    {
        // Asignar la malla estática
        Malla->SetStaticMesh(CuboMesh.Object);
        // Configurar la escala y la ubicación
        Malla->SetRelativeLocation(FVector(0.0f, 0.0f, 40.0f));
        // Configurar la escala
        Malla->SetWorldScale3D(FVector(1.0f));
        // Configurar la colisión
        //Para que el enemigo colisione con el jugador
        Malla->SetCollisionObjectType(ECC_Pawn);
        // Para que no colisione con lo demas
        Malla->SetCollisionResponseToAllChannels(ECR_Ignore);
        Malla->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
        Malla->SetGenerateOverlapEvents(true);
    }

    // IA
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    AIControllerClass = AAIController::StaticClass();

    // Velocidad de movimiento
    GetCharacterMovement()->MaxWalkSpeed = 200.0f;
}

void AEnemigo_Comandante::BeginPlay()
{
    Super::BeginPlay();

    AIController = Cast<AAIController>(GetController());
    if (!AIController)
    {
        UE_LOG(LogTemp, Warning, TEXT("No se pudo obtener el AIController"));
    }

    // Configurar el evento de colisión
    Malla->OnComponentBeginOverlap.AddDynamic(this, &AEnemigo_Comandante::OnOverlapJugador);

    // Patrulla hasta el siguiente punto
    if (PuntosDePatrulla.Num() > 0)
    {
        IrAlSiguientePunto();
    }

    // Obtener el jugador
    PlayerActor = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

void AEnemigo_Comandante::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!PlayerActor || !AIController) return;

    FVector DireccionAlJugador = (PlayerActor->GetActorLocation() - GetActorLocation()).GetSafeNormal();
    FVector DireccionFrente = GetActorForwardVector();
    float Distancia = FVector::Dist(GetActorLocation(), PlayerActor->GetActorLocation());
    float Angulo = FMath::RadiansToDegrees(acosf(FVector::DotProduct(DireccionFrente, DireccionAlJugador)));

    const float RangoVision = 400.0f;
    const float AnguloVision = 30.0f;

    DrawDebugCone(GetWorld(), GetActorLocation(), DireccionFrente, RangoVision,
        FMath::DegreesToRadians(AnguloVision), FMath::DegreesToRadians(AnguloVision),
        12, FColor::Yellow, false, -1.0f, 0, 1.0f);

    // Si cualquier enemigo vio al jugador, o este lo está viendo
    if (bJugadorDetectado || (Distancia <= RangoVision && Angulo <= AnguloVision))
    {
        bJugadorDetectado = true;  // Si este enemigo lo ve, notifica a los demás

        //GetCharacterMovement()->MaxWalkSpeed = 400.0f;
        AIController->MoveToActor(PlayerActor, 15.0f);
        GetWorldTimerManager().ClearTimer(TimerEspera);
        bEsperando = false;
    }
    else if (!bEsperando && AIController->GetMoveStatus() == EPathFollowingStatus::Idle && PuntosDePatrulla.Num() > 0)
    {
        bEsperando = true;
        GetWorldTimerManager().SetTimer(TimerEspera, this, &AEnemigo_Comandante::IrAlSiguientePunto, TiempoEspera, false);
    }
}


void AEnemigo_Comandante::IrAlSiguientePunto()
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

void AEnemigo_Comandante::OnOverlapJugador(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
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
            bJugadorDetectado = false;  // Si este enemigo lo ve, notifica a los demás
        }
    }
}