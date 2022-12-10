#include "AchievementUnlockCondition.h"

class UObject;
class UWorld;

void UAchievementUnlockCondition::BPF_UnlockAchievement(bool _bShutdownCondition) {
}

void UAchievementUnlockCondition::BPF_StopTimer() {
}

void UAchievementUnlockCondition::BPF_StartTimer() {
}

void UAchievementUnlockCondition::BPF_Shutdown() {
}

void UAchievementUnlockCondition::BPF_SetAchievementTag(FGameplayTag _newAchievementTag) {
}

void UAchievementUnlockCondition::BPF_ResetCounter() {
}

void UAchievementUnlockCondition::BPF_PauseOrResumeTimer(bool _bPause) {
}

bool UAchievementUnlockCondition::BPF_IsTimerActive() const {
    return false;
}

void UAchievementUnlockCondition::BPF_Init(UObject* _worldContext) {
}

void UAchievementUnlockCondition::BPF_IncrementCounter(int32 _iIncr) {
}

bool UAchievementUnlockCondition::BPF_HasCounter() const {
    return false;
}

float UAchievementUnlockCondition::BPF_GetTimerRemaining() const {
    return 0.0f;
}

int32 UAchievementUnlockCondition::BPF_GetCurrentCounter() const {
    return 0;
}

int32 UAchievementUnlockCondition::BPF_GetCounterMax() const {
    return 0;
}

void UAchievementUnlockCondition::BPF_ConditionFailed() {
}







bool UAchievementUnlockCondition::BPE_CanBeUnlocked_Implementation(const UWorld* _world) const {
    return false;
}

UAchievementUnlockCondition::UAchievementUnlockCondition() {
    this->m_bUseCustomAchievementTag = true;
    this->m_bUseTimer = false;
    this->m_fTimerTime = 1.00f;
    this->m_bHasCounter = false;
    this->m_iCountToReach = 1;
    this->m_bFailOnCounterReached = false;
    this->m_bWantAddToRoot = true;
}

