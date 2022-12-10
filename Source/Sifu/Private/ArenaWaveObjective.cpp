#include "ArenaWaveObjective.h"

class AAISituationActor;

void UArenaWaveObjective::OnWaveComplete(int32 _iWaveIndex) {
}

void UArenaWaveObjective::OnSituationResolved(AAISituationActor* _situationActor) {
}

UArenaWaveObjective::UArenaWaveObjective() {
    this->m_iFinalWaveIndex = -1;
    this->m_eScoringType = EScoringType::CombatPoints;
}

