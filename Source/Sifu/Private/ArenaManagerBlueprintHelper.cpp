#include "ArenaManagerBlueprintHelper.h"

class UArenaChallengeDescription;
class UBaseArenaObjective;

void UArenaManagerBlueprintHelper::BPF_SetChallengeIndex(int32 _iChallengeIndex) {
}

void UArenaManagerBlueprintHelper::BPF_SetArena(FGameplayTag _arenaTag) {
}

void UArenaManagerBlueprintHelper::BPF_OnCurrentChallengeSpecificLevelLoaded() {
}

int32 UArenaManagerBlueprintHelper::BPF_GetMaxAICharactersPerPool() {
    return 0;
}

FArenaParams UArenaManagerBlueprintHelper::BPF_GetCurrentParams() {
    return FArenaParams{};
}

UBaseArenaObjective* UArenaManagerBlueprintHelper::BPF_GetCurrentMasterObjective() {
    return NULL;
}

int32 UArenaManagerBlueprintHelper::BPF_GetCurrentChallengeIndex() {
    return 0;
}

UArenaChallengeDescription* UArenaManagerBlueprintHelper::BPF_GetCurrentChallenge() {
    return NULL;
}

FGameplayTag UArenaManagerBlueprintHelper::BPF_GetCurrentArena() {
    return FGameplayTag{};
}

int32 UArenaManagerBlueprintHelper::BPF_GetChallengeHighScore(UArenaChallengeDescription* _challengeDescription) {
    return 0;
}

UArenaManagerBlueprintHelper::UArenaManagerBlueprintHelper() {
}

