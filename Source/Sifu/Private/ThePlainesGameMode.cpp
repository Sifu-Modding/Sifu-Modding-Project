#include "ThePlainesGameMode.h"

class APlayerController;
class AController;

void AThePlainesGameMode::KillAllAis() {
}

TArray<APlayerController*> AThePlainesGameMode::BPF_GetPlayers() {
    return TArray<APlayerController*>();
}

void AThePlainesGameMode::BPF_ForceRestartPlayerAtStartNull(AController* _controller) {
}

bool AThePlainesGameMode::BPE_IsStartupGameMode_Implementation() const {
    return false;
}

void AThePlainesGameMode::AllAisSetFightingState(EFightingState _eFightingState, float _fDuration) {
}

AThePlainesGameMode::AThePlainesGameMode() {
    this->m_bOverrideAITraversalInfo = false;
    this->m_bIsTraversalUniversalLockEnabled = true;
    this->m_fTraversalLockTime = 1.00f;
    this->m_fTraversalCooldownPerAI = 5.00f;
    this->m_bAllowInitialOverlappingAllButQueryOnly = false;
    this->m_fGMDamageMultiplier = 1.00f;
}

