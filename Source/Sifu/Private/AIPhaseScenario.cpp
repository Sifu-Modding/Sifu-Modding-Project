#include "AIPhaseScenario.h"

UAIPhaseScenario::UAIPhaseScenario() {
    this->m_rootPhase = NULL;
}

FName UAIPhaseScenario::BPF_GetPhaseNameFromIndex(int32 _iPhaseIndex) const {
    return NAME_None;
}


