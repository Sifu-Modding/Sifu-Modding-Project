#include "ArenaChallengeDescription.h"

class AAIWaveRefillDirector;
class UBaseArenaObjective;

FArenaChallengeScoreUnion UArenaChallengeDescription::BPF_GetWantedScore(int32 _iLevel) const {
    return FArenaChallengeScoreUnion{};
}

AAIWaveRefillDirector* UArenaChallengeDescription::BPF_GetRefillDirector() const {
    return NULL;
}

int32 UArenaChallengeDescription::BPF_GetNbWaves() const {
    return 0;
}

int32 UArenaChallengeDescription::BPF_GetDeathCount() const {
    return 0;
}

TArray<FGameplayTag> UArenaChallengeDescription::BPF_GetCheatsToActivate() const {
    return TArray<FGameplayTag>();
}

TMap<FGameplayTag, FString> UArenaChallengeDescription::BPF_GetCheatsArguments() const {
    return TMap<FGameplayTag, FString>();
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
}

