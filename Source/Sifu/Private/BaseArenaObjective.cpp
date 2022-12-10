#include "BaseArenaObjective.h"

class UCharacterHealthComponent;

bool UBaseArenaObjective::ShouldShowScoreAsTime() const {
    return false;
}

void UBaseArenaObjective::OnPlayerDownStateChanged(UCharacterHealthComponent* _healthComponent, EDownState _state) {
}

void UBaseArenaObjective::OnGiveInitialControlToPlayer() {
}

bool UBaseArenaObjective::BPF_IsValidLevel(int32 _iLevel) const {
    return false;
}

int32 UBaseArenaObjective::BPF_GetStarsCount() const {
    return 0;
}

int32 UBaseArenaObjective::BPF_GetScoreThreshold(int32 _iLevel) const {
    return 0;
}

int32 UBaseArenaObjective::BPF_GetScore() const {
    return 0;
}

int32 UBaseArenaObjective::BPF_CountObtainedStars(int32 _iScore) {
    return 0;
}

void UBaseArenaObjective::BPF_ComputeHighScore(int32& _iOutSavedHighScore, bool& _bOutIsNewHighScore) {
}


UBaseArenaObjective::UBaseArenaObjective() {
    this->m_eScoreComparisonType = EScoreComparisonType::GreaterThanOrEquals;
    this->m_iScore = 0;
    this->m_bUseChrono = false;
    this->m_iStarCount = 0;
}

