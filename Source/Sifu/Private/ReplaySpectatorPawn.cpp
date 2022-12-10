#include "ReplaySpectatorPawn.h"
#include "ReplayCineCameraComponent.h"


AReplaySpectatorPawn::AReplaySpectatorPawn() {
    this->m_CineCameraComponent = CreateDefaultSubobject<UReplayCineCameraComponent>(TEXT("CineCameraComponent"));
    this->m_fDefaultRollCooldownOnReset = 0.35f;
}

