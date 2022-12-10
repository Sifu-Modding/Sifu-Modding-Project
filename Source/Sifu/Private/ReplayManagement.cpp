#include "ReplayManagement.h"

void UReplayManagement::BPF_SetReplayOpenState(const EReplayOpenState _eOpenState) {
}

void UReplayManagement::BPF_ResetReplayEditorMetaData(const FString& _replayID) {
}

bool UReplayManagement::BPF_IsReplayVersionCompatible(int32 _iReplayVersion, int32 _iChangeList) {
    return false;
}

bool UReplayManagement::BPF_IsCurrentReplay(const FString& _replayID) const {
    return false;
}

bool UReplayManagement::BPF_HasSpaceForNewReplay(const FReplaySizeManagement& _inSizeManagement) const {
    return false;
}

UReplayManagement::UReplayManagement() {
    this->m_ReplaySaveGame = NULL;
}

