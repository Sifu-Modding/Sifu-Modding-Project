#include "ArenaTargetsObjective.h"
#include "EScoreComparisonType.h"

UArenaTargetsObjective::UArenaTargetsObjective() {
    this->m_bHasCounter = true;
    this->m_eScoreComparisonType = EScoreComparisonType::LessThanOrEquals;
    this->m_bUseChrono = true;
    this->m_bHideTargetIndicatorsWhileNotFighting = false;
}

TArray<TSoftObjectPtr<AAISpawner>> UArenaTargetsObjective::BPF_GetTargets() const {
    return TArray<TSoftObjectPtr<AAISpawner>>();
}



