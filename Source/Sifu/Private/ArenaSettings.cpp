#include "ArenaSettings.h"

UArenaSettings::UArenaSettings() {
    this->m_fObjectiveStartTimerValue = 3.00f;
    this->m_eArenaUnlockingBehavior = EArenaUnlockingBehavior::AllStarsCount;
    this->m_iMaxStarCountThatUnlocksBatch = 3;
    this->m_iMaxStarCountThatGrantsCurrency = 3;
    this->m_iMaxNumberOfDifferentCharacterBP = 5;
    this->m_fOutsideVolumeCaptureTimeDelay = 0.50f;
    this->m_fBaseCaptureSpeedPerSecond = 1.00f;
    this->m_fCaptureSpeedMultiplierPerScoreMultiplier[0] = 1.00f;
    this->m_fCaptureSpeedMultiplierPerScoreMultiplier[1] = 1.00f;
    this->m_fCaptureSpeedMultiplierPerScoreMultiplier[2] = 1.00f;
    this->m_fNoEnemyInsideHardpointMultiplier = 5.00f;
    this->m_bEnableAllHardpointsEnemiesKilledMultiplier = true;
    this->m_fAllHardpointsEnemiesKilledMultiplier = 10.00f;
    this->m_fDelayBetweenHardpointActivation = 2.00f;
    this->m_fDelayBeforeScoreDecrease = 3.00f;
    this->m_CaptureScoreDecreaseOverTime = NULL;
    this->m_bChangeAIToAbandoningOnHardpointCapture = true;
    this->m_fAIDespawnDistance = 2000.00f;
    this->m_fAIDespawnDelayWhileNotRendered = 3.00f;
}

float UArenaSettings::BPF_GetCaptureSpeedMultiplierPerScoreMultiplier(int32 _iScoreMultiplierIndex) const {
    return 0.0f;
}


