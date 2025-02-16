#include "ReplayTimelineModel.h"

UReplayTimelineModel::UReplayTimelineModel() {
    this->m_bMusicBackgroundMuted = false;
}

void UReplayTimelineModel::BPF_UpdateKeyLocationData(UReplayKey* _key, const FVector& _vLocation, const FQuat& _qRotation) {
}

void UReplayTimelineModel::BPF_UpdateKeyData(UReplayKey* _key, const FReplayKeyData& _data) {
}

void UReplayTimelineModel::BPF_SetMusicForExport(FName _wantedMusic) {
}

void UReplayTimelineModel::BPF_SetMusicBackgroundMuted(const bool _bIsMuted) {
}

void UReplayTimelineModel::BPF_SaveState() {
}

void UReplayTimelineModel::BPF_RecalcDilatedTimes(int32 _iStartingIndex) {
}

bool UReplayTimelineModel::BPF_IsMusicBackgroundMuted() const {
    return false;
}

bool UReplayTimelineModel::BPF_IsLastKey(const UReplayKey* _key) const {
    return false;
}

bool UReplayTimelineModel::BPF_IsFirstKey(const UReplayKey* _key) const {
    return false;
}

bool UReplayTimelineModel::BPF_IsBoundaryKey(int32 _iIndex) const {
    return false;
}

bool UReplayTimelineModel::BPF_HasUndoStateAvailable() const {
    return false;
}

bool UReplayTimelineModel::BPF_HasRedoStateAvailable() const {
    return false;
}

bool UReplayTimelineModel::BPF_HasKey(int32 _iKeyIndex) const {
    return false;
}

UReplayKey* UReplayTimelineModel::BPF_GetPreviousKeyWithCameraTransition(const UReplayKey* _key) const {
    return NULL;
}

UReplayKey* UReplayTimelineModel::BPF_GetPreviousKeyOfType(const UReplayKey* _key, const EReplayKeyTypeFlag _eType) const {
    return NULL;
}

UReplayKey* UReplayTimelineModel::BPF_GetPreviousKey(const UReplayKey* _key) const {
    return NULL;
}

UReplayKey* UReplayTimelineModel::BPF_GetNextKeyWithCameraTransition(const UReplayKey* _key) const {
    return NULL;
}

UReplayKey* UReplayTimelineModel::BPF_GetNextKeyOfType(const UReplayKey* _key, const EReplayKeyTypeFlag _eType) const {
    return NULL;
}

UReplayKey* UReplayTimelineModel::BPF_GetNextKey(const UReplayKey* _key) const {
    return NULL;
}

TArray<UReplayKey*> UReplayTimelineModel::BPF_GetKeys() {
    return TArray<UReplayKey*>();
}

UReplayKey* UReplayTimelineModel::BPF_GetKeyAtKeyFrameIndex(int32 _iKeyFrameIndex) const {
    return NULL;
}

UReplayKey* UReplayTimelineModel::BPF_GetKey(int32 _iIndex) const {
    return NULL;
}

FName UReplayTimelineModel::BPF_GetCurrentMusicForExport() const {
    return NAME_None;
}


