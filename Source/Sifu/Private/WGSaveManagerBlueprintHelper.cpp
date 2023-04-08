#include "WGSaveManagerBlueprintHelper.h"

void UWGSaveManagerBlueprintHelper::BPF_SnapshotPartOfSave(int32 _iSaveTypeBitmask, int32 _iSaveEntryToExclude) {
}

void UWGSaveManagerBlueprintHelper::BPF_SetNeedSaveProfile() {
}

void UWGSaveManagerBlueprintHelper::BPF_SetNeedSaveGame(int32 _iSaveTypeBitmask) {
}

void UWGSaveManagerBlueprintHelper::BPF_ResetSnapshotWithMask(int32 _iSaveTypeBitmask) {
}

void UWGSaveManagerBlueprintHelper::BPF_ResetPartOfSave(int32 _iSaveTypeBitmask) {
}

void UWGSaveManagerBlueprintHelper::BPF_ResetForbiddenSaveMask() {
}

int32 UWGSaveManagerBlueprintHelper::BPF_PushForbiddenSaveMask(int32 _iSaveTypeBitmask, const FString& _contextString) {
    return 0;
}

void UWGSaveManagerBlueprintHelper::BPF_PushBlockWorldStateSave(const FString& _contextString) {
}

void UWGSaveManagerBlueprintHelper::BPF_PopForbiddenSaveMask(int32 _iHandle) {
}

void UWGSaveManagerBlueprintHelper::BPF_PopBlockWorldStateSave() {
}

void UWGSaveManagerBlueprintHelper::BPF_OverrideSaveWithSnapshot(int32 _iSaveTypeBitmask) {
}

bool UWGSaveManagerBlueprintHelper::BPF_HasSnapshotOfMask(int32 _iSaveTypeBitmask) {
    return false;
}

void UWGSaveManagerBlueprintHelper::BPF_GetSnapshotSavedData(int32 _iSaveTypeBitmask, FDuplicatedSaveData& _snapshotSavedData) {
}

int32 UWGSaveManagerBlueprintHelper::BPF_GetForbiddenMask() {
    return 0;
}

UWGSaveManagerBlueprintHelper::UWGSaveManagerBlueprintHelper() {
}

