#include "WGSaveObjectGameData.h"

UWGSaveObjectGameData::UWGSaveObjectGameData() {
}

void UWGSaveObjectGameData::ReloadDefaultStatsFromDataTable() {
}

void UWGSaveObjectGameData::BPF_RemoveGameplayTag(FGameplayTag _gameplayTagToAdd) {
}

bool UWGSaveObjectGameData::BPF_HasGameplayTag(FGameplayTag _gameplayTagToAdd) {
    return false;
}

float UWGSaveObjectGameData::BPF_GetDefaultStatValue(ECharacterStat _eStat, bool& _bFound) const {
    return 0.0f;
}

void UWGSaveObjectGameData::BPF_AddOrUpdateMaskSnapshot(int32 _iMask, const FDuplicatedSaveData& _duplicatedData) {
}

void UWGSaveObjectGameData::BPF_AddGameplayTag(FGameplayTag _gameplayTagToAdd) {
}

bool UWGSaveObjectGameData::BPE_SynchronizeAchievementProgress_Implementation(const TMap<FString, float>& _achievementProgress) {
    return false;
}

FString UWGSaveObjectGameData::BPE_SnapshotSaveMask_Implementation(int32 _iSaveMaskToBackup, int32 _iSaveEntryToExclude) {
    return TEXT("");
}


FString UWGSaveObjectGameData::BPE_OverrideSaveMaskWithSnapshot_Implementation(int32 _iSnapshotIdx) {
    return TEXT("");
}

int32 UWGSaveObjectGameData::BPE_GenerateGlobalAllowedSaveMask_Implementation() const {
    return 0;
}

void UWGSaveObjectGameData::BPE_CopyToSaveWithMask_Implementation(USCSaveObjectGameData* _inSaveTo, int32 _iTestMask) {
}


