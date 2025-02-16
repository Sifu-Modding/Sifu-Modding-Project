#include "ArenaHardpointsObjective.h"

UArenaHardpointsObjective::UArenaHardpointsObjective() {
    this->m_bUseTimer = true;
    this->m_eHardpointActivationRule = EHardpointActivationRule::Sequential;
    this->m_eSequentialLoopRule = ESequentialLoopRule::LoopOnAllInSameOrder;
    this->m_fHardpointCaptureValue = 300.00f;
    this->m_bHasClearedAllHardpointsOnce = false;
}

int32 UArenaHardpointsObjective::BPF_GetTotalNumberOfHardpoints() const {
    return 0;
}

int32 UArenaHardpointsObjective::BPF_GetCurrentHardpointIndex() const {
    return 0;
}

AArenaHardpointAreaActor* UArenaHardpointsObjective::BPF_GetCurrentHardpointAreaActor() const {
    return NULL;
}


