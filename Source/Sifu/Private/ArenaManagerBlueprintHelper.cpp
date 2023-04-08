#include "ArenaManagerBlueprintHelper.h"

class UArenaChallengeDescription;
class UArenaSettings;
class UBaseArenaObjective;

void UArenaManagerBlueprintHelper::BPF_SetCurrentArena(int32 _iBatchIndex, int32 _iChallengeIndex) {
}

void UArenaManagerBlueprintHelper::BPF_SetChallengeIndex(int32 _iChallengeIndex) {
}

void UArenaManagerBlueprintHelper::BPF_SetArena(FGameplayTag _arenaTag) {
}

void UArenaManagerBlueprintHelper::BPF_OnCurrentChallengeSpecificLevelShown() {
}

void UArenaManagerBlueprintHelper::BPF_OnCurrentChallengeSpecificLevelLoaded() {
}

void UArenaManagerBlueprintHelper::BPF_MarkChallengeAsSeen(const UArenaChallengeDescription* _challengeDescription) {
}

bool UArenaManagerBlueprintHelper::BPF_IsDebugChallenge() {
    return false;
}

bool UArenaManagerBlueprintHelper::BPF_HasChallengeBeenSeen(const UArenaChallengeDescription* _challengeDescription) {
    return false;
}

int32 UArenaManagerBlueprintHelper::BPF_GetMaxAICharactersPerPool() {
    return 0;
}

int32 UArenaManagerBlueprintHelper::BPF_GetLastSelectedChallengeIndex() {
    return 0;
}

int32 UArenaManagerBlueprintHelper::BPF_GetLastSelectedBatchIndex() {
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

int32 UArenaManagerBlueprintHelper::BPF_GetChallengeBestStarCount(const UArenaChallengeDescription* _challengeDescription) {
    return 0;
}

UArenaSettings* UArenaManagerBlueprintHelper::BPF_GetArenaSettings() {
    return NULL;
}

TArray<FArenaBatch> UArenaManagerBlueprintHelper::BPF_GetArenaBatches(FGameplayTag _restrictionTag) {
    return TArray<FArenaBatch>();
}

void UArenaManagerBlueprintHelper::BPF_EnableProgressionSystem(bool _bEnabled) {
}

FArenaBatchProgressionInfo UArenaManagerBlueprintHelper::BPF_ComputeBatchProgression(const FArenaBatch& _ArenaBatch) {
    return FArenaBatchProgressionInfo{};
}

FArenaProgressionInfo UArenaManagerBlueprintHelper::BPF_ComputeArenaProgression(FGameplayTag _restrictionTag) {
    return FArenaProgressionInfo{};
}

UArenaManagerBlueprintHelper::UArenaManagerBlueprintHelper() {
}

