#include "ThePlainesGameMode.h"
#include "FightingCharacter.h"
#include "FightingPlayerController.h"
#include "FightingPlayerState.h"
#include "ThePlainesGameState.h"

AThePlainesGameMode::AThePlainesGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AThePlainesGameState::StaticClass();
    this->PlayerControllerClass = AFightingPlayerController::StaticClass();
    this->PlayerStateClass = AFightingPlayerState::StaticClass();
    this->DefaultPawnClass = AFightingCharacter::StaticClass();
    this->m_bOverrideAITraversalInfo = false;
    this->m_bIsTraversalUniversalLockEnabled = true;
    this->m_fTraversalLockTime = 1.00f;
    this->m_fTraversalCooldownPerAI = 5.00f;
    this->m_bAllowInitialOverlappingAllButQueryOnly = false;
    this->m_fGMDamageMultiplier = 1.00f;
}

void AThePlainesGameMode::KillAllAis() {
}

TArray<APlayerController*> AThePlainesGameMode::BPF_GetPlayers() {
    return TArray<APlayerController*>();
}

void AThePlainesGameMode::BPF_ForceRestartPlayerAtStartNull(AController* _controller) {
}

void AThePlainesGameMode::BPE_TryGetOverrideGenderAndOutfit_Implementation(ECharacterGender& _eOutGender, int32& _iOutOutfitIndex, bool& _bOutEnableOutfitPropSpawn) const {
}

void AThePlainesGameMode::BPE_TryGetOverrideAge_Implementation(int32& _iOutAge) const {
}

bool AThePlainesGameMode::BPE_IsStartupGameMode_Implementation() const {
    return false;
}

void AThePlainesGameMode::AllAisSetFightingState(EFightingState _eFightingState, float _fDuration) {
}


