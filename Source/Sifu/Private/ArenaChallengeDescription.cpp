#include "ArenaChallengeDescription.h"

class AAIWaveRefillDirector;
class ABaseWeapon;
class UBaseArenaObjective;

AAIWaveRefillDirector* UArenaChallengeDescription::BPF_GetRefillDirector() const {
    return NULL;
}

int32 UArenaChallengeDescription::BPF_GetNbWaves() const {
    return 0;
}

int32 UArenaChallengeDescription::BPF_GetDeathCount() const {
    return 0;
}

TMap<FGameplayTag, FString> UArenaChallengeDescription::BPF_GetCheatsToActivate() const {
    return TMap<FGameplayTag, FString>();
}

TSoftClassPtr<ABaseWeapon> UArenaChallengeDescription::BPF_GetCarriedWeapon() const {
    return NULL;
}

UBaseArenaObjective* UArenaChallengeDescription::BPF_GetArenaObjective() const {
    return NULL;
}

int32 UArenaChallengeDescription::BPF_GetAge() const {
    return 0;
}

UArenaChallengeDescription::UArenaChallengeDescription() {
    this->m_iAge = 20;
    this->m_iDeathCount = 0;
    this->m_eCharacterGender = ECharacterGender::None;
    this->m_bOverrideOutfit = false;
    this->m_iOutfitIndex = 0;
    this->m_bEnableOutfitPropSpawn = true;
}

