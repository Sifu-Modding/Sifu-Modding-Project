#include "PropertyReaction.h"

FPropertyReaction::FPropertyReaction() {
    this->m_bUseRootMotion = false;
    this->m_bAlwayKeepCurrentStateDurationOnHit = false;
    this->m_bPauseGuardBreak = false;
    this->m_bHoldDuringStructureBroken = false;
    this->m_fMaxAccumulatedDamage = 0.00f;
    this->m_iMaxAccumatedHits = 0;
    this->m_bGroupMaxAccumulatedHitsByAttack = false;
}

