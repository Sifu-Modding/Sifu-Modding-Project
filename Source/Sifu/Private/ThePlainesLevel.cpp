#include "ThePlainesLevel.h"

AThePlainesLevel::AThePlainesLevel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_BlenderManager = NULL;
    this->m_StartupSequence = NULL;
    this->m_bInChargeOfSoundSave = false;
}

void AThePlainesLevel::UnregisterFromSignificanceOnActorEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

bool AThePlainesLevel::BPF_IsSoundStateContainedInSaved(const FString& _SoundState) const {
    return false;
}

void AThePlainesLevel::BPF_InitSoundState(const FString& _StateGroup, const FString& _state, bool _bReplicates, bool _bSaveGame) {
}







