#include "SCGameInstance.h"

USCGameInstance::USCGameInstance() {
    this->m_bEnableDevMode = false;
    this->m_HudOffsetFromBlackBarWhenAboveDefaultRatioRuntime = NULL;
    this->m_HudOffsetFromBlackBarWhenBelowDefaultRatioRuntime = NULL;
}

void USCGameInstance::UnlockInGameAchievement(const FGameplayTag& _achievementToUnlock) {
}

void USCGameInstance::UnlockAllInGameAchievements() {
}

void USCGameInstance::TriggerPGOWriteFile() {
}

void USCGameInstance::ResetAllInGameAchievements() {
}

void USCGameInstance::LockInGameAchievement(const FGameplayTag& _achievementToLock) {
}

void USCGameInstance::BPF_BindToLowPerformanceChanged(USCGameInstance::FLowPerformanceModeChanged Delegate) {
}


