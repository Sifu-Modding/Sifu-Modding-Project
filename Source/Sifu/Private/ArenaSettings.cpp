#include "ArenaSettings.h"

UArenaSettings::UArenaSettings() {
    this->m_iMaxNumberOfDifferentCharacterBP = 5;
    this->m_iNbImpostorPerClasses = 5;
    this->m_fOutsideVolumeCaptureTimeDelay = 0.50f;
    this->m_fBaseCaptureSpeedPerSecond = 1.00f;
    this->m_fCaptureSpeedMultiplierPerScoreMultiplier[0] = 1.00f;
    this->m_fCaptureSpeedMultiplierPerScoreMultiplier[1] = 1.00f;
    this->m_fCaptureSpeedMultiplierPerScoreMultiplier[2] = 1.00f;
    this->m_fNoEnemyInsideHardpointMultiplier = 5.00f;
    this->m_bEnableAllHardpointsEnemiesKilledMultiplier = true;
    this->m_fAllHardpointsEnemiesKilledMultiplier = 10.00f;
    this->m_fDelayBetweenHardpointActivation = 2.00f;
}

