#include "WGGameFlow.h"

UWGGameFlow::UWGGameFlow() {
}

void UWGGameFlow::TravelToPendingMapInternal(EWorldTravelLoadSaveStrategy _eLoadSaveStrategy, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, int32 _iPartOfSaveToResetMask, bool _bKeepCheats) {
}

void UWGGameFlow::OnControllerReconnectConfirm() {
}

void UWGGameFlow::BPF_TravelToPendingMap(bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask, float _fFadeDuration, bool _bKeepCheats, bool _bUseDefaultSave) {
}

void UWGGameFlow::BPF_RestartCurrentMap() {
}

void UWGGameFlow::BPF_ResetTags() {
}

void UWGGameFlow::BPF_RaiseTag(FGameplayTag _tagToRaise) {
}

void UWGGameFlow::BPF_LoadNextMap(bool _bForceClassicTravel) {
}

void UWGGameFlow::BPF_LoadMap(FName _mapTag, EGameFlowTravelType _eTravelTypeWanted, EMenuEnum _eMenuToShow, FGameplayTagContainer _mapOptions) {
}

bool UWGGameFlow::BPF_IsStoryMap(const FName _mapTag) const {
    return false;
}

bool UWGGameFlow::BPF_IsPendingTravel() {
    return false;
}

void UWGGameFlow::BPF_GoToNextMap(bool _bWantsToSave, bool _bWantsToReloadSave, bool _bUseDefaultSave) {
}

bool UWGGameFlow::BPF_GotoMap(FName _mapTag, FGameplayTagContainer _specificMapOptions, bool _bWantsToSave, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, EMenuEnum _eMenuToShow, bool _bWantsToReloadSave, int32 _iPartOfSaveToResetMask, bool _bKeepCheats, bool _bUseDefaultSave) {
    return false;
}

EMenuEnum UWGGameFlow::BPF_GetPendingMenuToShow() const {
    return EMenuEnum::InGameMenu;
}

FName UWGGameFlow::BPF_GetFirstPlayableMapTagName() const {
    return NAME_None;
}

FName UWGGameFlow::BPF_GetCurrentMapTag() const {
    return NAME_None;
}

int32 UWGGameFlow::BPF_GetCurrentHideoutIndex() const {
    return 0;
}

bool UWGGameFlow::BPF_CurrentMapHasMapOption(EWGGameFlowMapOption _eMapOption) const {
    return false;
}


