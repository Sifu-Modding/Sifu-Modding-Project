#include "ReplayTimelineController.h"
#include "ReplayCutManagement.h"

class UReplayKey;

void UReplayTimelineController::BPF_SaveKeys() {
}

void UReplayTimelineController::BPF_ResetTransitionContext() {
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

UReplayTimelineController::UReplayTimelineController() {
    this->m_CutManagement = CreateDefaultSubobject<UReplayCutManagement>(TEXT("CutManagement"));
    this->m_Model = NULL;
}

