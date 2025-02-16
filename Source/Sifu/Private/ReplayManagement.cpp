#include "ReplayManagement.h"

UReplayManagement::UReplayManagement() {
    this->m_ReplaySaveGame = NULL;
}

void UReplayManagement::OnStreamingCompleteQuitReplayManagement() {
}

void UReplayManagement::OnQuitReplayManagementMenu(bool _bIsPlayingReplay) {
}

void UReplayManagement::BPF_SetReplayOpenState(const EReplayOpenState _eOpenState) {
}

void UReplayManagement::BPF_ResetReplayEditorMetaDataWithCallback(const FString& _replayID, const FSCDynamicDelegate& _callback) {
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


