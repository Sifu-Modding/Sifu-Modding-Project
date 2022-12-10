#include "WGAchievementUnlockCondition.h"







void UWGAchievementUnlockCondition::BPE_GetTitleAndDescription_Implementation(FText& _title, FText& _description) const {
}

UWGAchievementUnlockCondition::UWGAchievementUnlockCondition() {
    this->m_bIsActive = false;
    this->m_WantedDifficulties = 0;
    this->m_iCheatsUnlockPointsToAdd = 0;
    this->m_bAddCheatsUnlockPoints = false;
    this->m_eAllowedRunType = ERunType::Vanilla;
    this->m_bWantSpecificDifficulty = false;
    this->m_eMonitoredOrder = EOrderType::None;
    this->m_bMonitorOrder = false;
}

