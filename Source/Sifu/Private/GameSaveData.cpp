#include "GameSaveData.h"

FGameSaveData::FGameSaveData() {
    this->m_eGender = ECharacterGender::Man;
    this->m_iOutfitIndex = 0;
    this->m_fMCDominationGauge = 0.00f;
    this->m_iLastManGauge = 0;
    this->m_fMCHealth = 0.00f;
    this->m_fMCFocusGauge = 0.00f;
    this->m_fFloorScore = 0.00f;
    this->m_bLevelScoringComplete = false;
}

