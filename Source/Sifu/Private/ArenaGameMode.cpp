#include "ArenaGameMode.h"
#include "ArenaGameState.h"

AArenaGameMode::AArenaGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AArenaGameState::StaticClass();
    this->m_bOverrideAITraversalInfo = true;
    this->m_bIsTraversalUniversalLockEnabled = false;
    this->m_bAllowInitialOverlappingAllButQueryOnly = true;
    this->m_fEndArenaDelay = 10.00f;
}

void AArenaGameMode::ShowArenaOutro(uint8 _iOrderID, UOrderComponent* _OrderComponent) {
}

void AArenaGameMode::ForceHardpointCapture() {
}

void AArenaGameMode::BPF_TriggerEndArena() {
}

void AArenaGameMode::BPF_PlayerPressStart() {
}

void AArenaGameMode::BPF_FlagArenaForRestart() {
}


