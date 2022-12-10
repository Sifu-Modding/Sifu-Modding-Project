#include "AIPhaseScenario.h"

FName UAIPhaseScenario::BPF_GetPhaseNameFromIndex(int32 _iPhaseIndex) const {
    return NAME_None;
}

UAIPhaseScenario::UAIPhaseScenario() {
    this->m_rootPhase = NULL;
}

