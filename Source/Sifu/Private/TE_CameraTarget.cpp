#include "TE_CameraTarget.h"
#include "ETargetingPrio.h"

UTE_CameraTarget::UTE_CameraTarget() {
    this->m_eTargettingType = ETargetingPrio::AllInRange;
    this->m_bOnlyRelevantForOneTarget = true;
}


