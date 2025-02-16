#include "SCBaseGameSettings.h"

USCBaseGameSettings::USCBaseGameSettings() {
    this->m_bHasCheats = true;
    this->m_AchievementsToIgnoreWhenCheckingPlatinum.AddDefaulted(18);
}

FGameplayTagContainer USCBaseGameSettings::BPF_GetAllowedContentGameplayTagContainer() {
    return FGameplayTagContainer{};
}

TArray<FString> USCBaseGameSettings::BPF_GetAchievementsToIgnoreWhenCheckingPlatinum() {
    return TArray<FString>();
}


