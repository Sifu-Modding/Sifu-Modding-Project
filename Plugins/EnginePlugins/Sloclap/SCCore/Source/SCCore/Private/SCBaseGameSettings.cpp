#include "SCBaseGameSettings.h"

FGameplayTagContainer USCBaseGameSettings::BPF_GetAllowedContentGameplayTagContainer() {
    return FGameplayTagContainer{};
}

USCBaseGameSettings::USCBaseGameSettings() {
    this->m_bHasCheats = true;
}

