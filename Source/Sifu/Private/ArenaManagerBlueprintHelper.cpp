#include "ArenaManagerBlueprintHelper.h"

UArenaManagerBlueprintHelper::UArenaManagerBlueprintHelper() {
}

void UArenaManagerBlueprintHelper::BPF_SetCurrentArena(int32 _iBatchIndex, int32 _iChallengeIndex) {
}

void UArenaManagerBlueprintHelper::BPF_SetArenaCustomOutfit(int32 _outfitIndex) {
}

void UArenaManagerBlueprintHelper::BPF_ResetArenaCustomOutfit() {
}

void UArenaManagerBlueprintHelper::BPF_OnCurrentChallengeSpecificLevelLoaded() {
}

void UArenaManagerBlueprintHelper::BPF_MarkChallengeAsSeen(const UArenaChallengeDescription* _challengeDescription) {
}

bool UArenaManagerBlueprintHelper::BPF_IsDebugChallenge() {
    return false;
}

bool UArenaManagerBlueprintHelper::BPF_IsArenaCustomModeEnabled() {
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

UBaseArenaObjective* UArenaManagerBlueprintHelper::BPF_GetCurrentMasterObjective() {
    return NULL;
}

int32 UArenaManagerBlueprintHelper::BPF_GetCurrentChallengeIndex() {
    return 0;
}

UArenaChallengeDescription* UArenaManagerBlueprintHelper::BPF_GetCurrentChallenge() {
    return NULL;
}

FGameplayTag UArenaManagerBlueprintHelper::BPF_GetCurrentBatchCategory() {
    return FGameplayTag{};
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

int32 UArenaManagerBlueprintHelper::BPF_GetArenaCustomModeOutfit() {
    return 0;
}

TArray<FArenaBatch> UArenaManagerBlueprintHelper::BPF_GetArenaBatches(FGameplayTag _restrictionTag, FGameplayTag _filterTag) {
    return TArray<FArenaBatch>();
}

void UArenaManagerBlueprintHelper::BPF_EnableProgressionSystem(bool _bEnabled) {
}

void UArenaManagerBlueprintHelper::BPF_EnableArenaCustomMode(bool _bEnabled) {
}

FArenaBatchProgressionInfo UArenaManagerBlueprintHelper::BPF_ComputeBatchProgression(const FArenaBatch& _ArenaBatch) {
    return FArenaBatchProgressionInfo{};
}

FArenaProgressionInfo UArenaManagerBlueprintHelper::BPF_ComputeArenaProgression(FGameplayTag _restrictionTag, FGameplayTag _filterTag) {
    return FArenaProgressionInfo{};
}

void UArenaManagerBlueprintHelper::BPF_ComputeArenaFinished(FGameplayTag _restrictionTag, FGameplayTag _filterTag, uint8& _outuiArenaFinished, uint8& _outuiTotalArena) {
}


