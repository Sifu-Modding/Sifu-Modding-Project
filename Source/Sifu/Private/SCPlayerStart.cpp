#include "SCPlayerStart.h"
#include "Components/SceneComponent.h"

ASCPlayerStart::ASCPlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_AnchorSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("AnchorForSequence"));
    this->m_bKeepBackGroundDuringStartupMenu = false;
    this->m_spawnedPlayer = NULL;
    this->m_bForFirstSpawn = false;
    this->m_ePlayerScreenSide = EPlayerScreenSide::Right;
    this->m_IdleStartupSequence = NULL;
    this->m_StartupSequence = NULL;
    this->m_fCameraBlendDurationBetweenLoopAndGoto = 0.50f;
    this->m_CameraShakeClass = NULL;
    this->m_AnchorSceneComponent->SetupAttachment(RootComponent);
}

bool ASCPlayerStart::BPF_WantKeepBackgroundDuringStartupMenu() const {
    return false;
}



