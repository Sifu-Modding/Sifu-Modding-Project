#include "TE_CurrentAttacked.h"
#include "ETargetingPrio.h"

UTE_CurrentAttacked::UTE_CurrentAttacked() {
    this->m_eTargettingType = ETargetingPrio::CurrentAttacked;
    this->m_fAutoSelectTargetCooldown = 0.50f;
}


