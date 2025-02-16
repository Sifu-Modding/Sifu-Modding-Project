#include "ArenaWaveObjective.h"

UArenaWaveObjective::UArenaWaveObjective() {
    this->m_iFinalWaveIndex = -1;
    this->m_eScoringType = EScoringType::CombatPoints;
}

void UArenaWaveObjective::OnWaveAndSituationComplete(int32 _iWaveIndex) {
}


