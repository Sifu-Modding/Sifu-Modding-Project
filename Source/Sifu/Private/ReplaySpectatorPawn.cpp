#include "ReplaySpectatorPawn.h"
#include "ReplayCineCameraComponent.h"
#include "ReplaySpectatorPawnMovement.h"

AReplaySpectatorPawn::AReplaySpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UReplaySpectatorPawnMovement>(TEXT("MovementComponent0"))) {
    this->bUseControllerRotationPitch = true;
    this->bUseControllerRotationYaw = true;
    this->bUseControllerRotationRoll = true;
    this->m_CineCameraComponent = CreateDefaultSubobject<UReplayCineCameraComponent>(TEXT("CineCameraComponent"));
    this->m_fDefaultRollCooldownOnReset = 0.35f;
    this->m_CineCameraComponent->SetupAttachment(RootComponent);
}



