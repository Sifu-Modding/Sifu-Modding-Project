#include "CheatManagerBlueprintHelper.h"

UCheatManagerBlueprintHelper::UCheatManagerBlueprintHelper() {
}

void UCheatManagerBlueprintHelper::BPF_UnapplyCheats() {
}

void UCheatManagerBlueprintHelper::BPF_UnapplyCheat(FGameplayTag _cheatTag) {
}

bool UCheatManagerBlueprintHelper::BPF_IsCheatApplied(FGameplayTag _cheatToFind) {
    return false;
}

bool UCheatManagerBlueprintHelper::BPF_IsCheatActivated(FGameplayTag _cheatToFind) {
    return false;
}

bool UCheatManagerBlueprintHelper::BPF_HasAppliedCheats() {
    return false;
}

TMap<FGameplayTag, FString> UCheatManagerBlueprintHelper::BPF_GetRandomCheats(int32 _iNumMin, int32 _iNumMax, FGameplayTagContainer _BannedCheats) {
    return TMap<FGameplayTag, FString>();
}

USCCheatManagerSettings* UCheatManagerBlueprintHelper::BPF_GetCheatDefaultSettings() {
    return NULL;
}

FString UCheatManagerBlueprintHelper::BPF_GetCheatArgument(FGameplayTag _cheatWanted) {
    return TEXT("");
}

FGameplayTagContainer UCheatManagerBlueprintHelper::BPF_GetAppliedCheats() {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UCheatManagerBlueprintHelper::BPF_GetActivatedCheats() {
    return FGameplayTagContainer{};
}

void UCheatManagerBlueprintHelper::BPF_DeactivateCheats(FGameplayTagContainer _cheatsToDeactivate) {
}

void UCheatManagerBlueprintHelper::BPF_DeactivateCheat(FGameplayTag _cheatToDeactivate) {
}

void UCheatManagerBlueprintHelper::BPF_DeactivateAllCheats() {
}

bool UCheatManagerBlueprintHelper::BPF_AreCheatsAllowed() {
    return false;
}

void UCheatManagerBlueprintHelper::BPF_ApplyCheats(bool _bForceApply) {
}

void UCheatManagerBlueprintHelper::BPF_ApplyCheat(FGameplayTag _cheatTag, bool _bForceApply) {
}

void UCheatManagerBlueprintHelper::BPF_ActivateCheats(FGameplayTagContainer _cheatsToActivate, const FString& _argument) {
}

void UCheatManagerBlueprintHelper::BPF_ActivateCheat(FGameplayTag _cheatToActivate, const FString& _argument) {
}


