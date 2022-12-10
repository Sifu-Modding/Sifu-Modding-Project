#include "LocomotionTransitionsResultCache.h"

FLocomotionTransitionsResultCache::FLocomotionTransitionsResultCache() {
    this->m_bToV0 = false;
    this->m_bToV1 = false;
    this->m_bToV2 = false;
    this->m_bTransitionToV0 = false;
    this->m_bTransitionToV1 = false;
    this->m_bTransitionToV1_MoveStatusCombat = false;
    this->m_bTransitionToV1_AIHack = false;
    this->m_bTransitionToV2 = false;
    this->m_bTransitionToV3 = false;
    this->m_bIsInTransition = false;
}

