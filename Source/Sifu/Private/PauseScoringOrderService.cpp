#include "PauseScoringOrderService.h"

UPauseScoringOrderService::UPauseScoringOrderService() {
    this->m_bPauseEfficiency = true;
    this->m_bRestartEfficiencyTimers = true;
    this->m_bPauseBonusMalus = true;
    this->m_bRestartBonusMalusTimers = true;
}

