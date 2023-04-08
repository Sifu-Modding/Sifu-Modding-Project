#include "AIWaveSpawner.h"

void AAIWaveSpawner::BPF_SetArchetypeToSpawn(EAIArchetype _eArchetype) {
}

AAIWaveSpawner::AAIWaveSpawner() {
    this->m_iArchetypesMask = 0;
    this->m_eGlobalBehaviorAtSpawn = EGlobalBehaviors::Alerted;
    this->m_bAllowSpawnWhileVisible = false;
    this->m_bHasPriorityIfVisible = false;
}

