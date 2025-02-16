#include "ReplayTimelineController.h"
#include "ReplayCutManagement.h"

UReplayTimelineController::UReplayTimelineController() {
    this->m_CutManagement = CreateDefaultSubobject<UReplayCutManagement>(TEXT("CutManagement"));
    this->m_Model = NULL;
}

void UReplayTimelineController::BPF_SaveKeysWithCallback(const FSCDynamicDelegate& _onModelSaved) {
}

void UReplayTimelineController::BPF_SaveKeys() {
}

void UReplayTimelineController::BPF_ResetTransitionContext() {
}

void UReplayTimelineController::BPF_ResetModelWithCallback(const FSCDynamicDelegate& _onModelSaved) {
}

void UReplayTimelineController::BPF_ResetModel() {
}

void UReplayTimelineController::BPF_ResetFocusTargetTransitionContext() {
}

UReplayKey* UReplayTimelineController::BPF_GetCurrentKeyWithCameraTransition() const {
    return NULL;
}

UReplayKey* UReplayTimelineController::BPF_GetCurrentKeyOfType(EReplayKeyTypeFlag _eTypeFlag) const {
    return NULL;
}


