#include "AIActionAttack.h"

UAIActionAttack::UAIActionAttack() {
    this->m_bCheckObstacles = false;
    this->m_bCheckFriendlyFire = false;
}

void UAIActionAttack::BPF_NotifyAttackStarted() const {
}



float UAIActionAttack::BPE_GetAttackRange_Implementation() const {
    return 0.0f;
}


