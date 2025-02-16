#include "AIWaveSpawner.h"

AAIWaveSpawner::AAIWaveSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_iArchetypesMask = 0;
    this->m_eGlobalBehaviorAtSpawn = EGlobalBehaviors::Alerted;
    this->m_bAllowSpawnWhileVisible = false;
    this->m_bHasPriorityIfVisible = false;
}

void AAIWaveSpawner::BPF_SetArchetypeToSpawn(EAIArchetype _eArchetype) {
}


