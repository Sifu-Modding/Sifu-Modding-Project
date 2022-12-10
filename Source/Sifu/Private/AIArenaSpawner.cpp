#include "AIArenaSpawner.h"

void AAIArenaSpawner::BPF_SetCurrentPreset(FName _currentPreset) {
}

void AAIArenaSpawner::BPF_GetSpawningClassesFromParams(TArray<FSpawningClassContainer>& _outSpawningClassContainers) {
}

void AAIArenaSpawner::BPF_GetCarriedWeaponsFromParams(TArray<FCarriedWeaponContainer>& _outCarriedWeaponContainers) {
}

void AAIArenaSpawner::BPF_GetCarriedPropsFromParams(TArray<FCarriedPropsContainer>& _outCarriedPropsContainers) {
}

AAIArenaSpawner::AAIArenaSpawner() {
    this->m_DefaultPreset = TEXT("Default");
}

