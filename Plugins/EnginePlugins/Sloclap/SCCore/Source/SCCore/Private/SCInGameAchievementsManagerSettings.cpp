#include "SCInGameAchievementsManagerSettings.h"

USCInGameAchievementsManagerSettings::USCInGameAchievementsManagerSettings() {
}

FAchievementUnlockConditionStruct USCInGameAchievementsManagerSettings::BPF_GetUnlockConditionStructFromTag(const FGameplayTag& _ObjectTag) const {
    return FAchievementUnlockConditionStruct{};
}

UAchievementUnlockCondition* USCInGameAchievementsManagerSettings::BPF_GetUnlockConditionInstanceFromTag(FGameplayTag _wantedUnlockCondition) const {
    return NULL;
}

TArray<UAchievementUnlockCondition*> USCInGameAchievementsManagerSettings::BPF_GetAllUnlockConditionInstances() const {
    return TArray<UAchievementUnlockCondition*>();
}

TArray<FAchievementUnlockConditionStruct> USCInGameAchievementsManagerSettings::BPF_GetAllObjectUnlock() const {
    return TArray<FAchievementUnlockConditionStruct>();
}


