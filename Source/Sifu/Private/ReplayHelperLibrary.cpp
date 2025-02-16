#include "ReplayHelperLibrary.h"

UReplayHelperLibrary::UReplayHelperLibrary() {
}

void UReplayHelperLibrary::BPF_SetScreenMessagesEnabled(bool _bEnabled) {
}

void UReplayHelperLibrary::BPF_SaveReplayFilterProperties(const FFilterProperties& _inProperties, ABaseReplayController* _controller) {
}

void UReplayHelperLibrary::BPF_SaveFilterPreset(int32 _iSlot, const FFilterProperties& _inProperties, ABaseReplayController* _controller) {
}

FFilterProperties UReplayHelperLibrary::BPF_LoadReplayFilterProperties(ABaseReplayController* _controller, bool& _bOutIsDefault) {
    return FFilterProperties{};
}

FFilterProperties UReplayHelperLibrary::BPF_LoadFilterPreset(int32 _iSlot, bool& _bIsValid) {
    return FFilterProperties{};
}

bool UReplayHelperLibrary::BPF_IsAvailabilityLayerPushed(const FAvailabilityLayerCache& _inALCache) {
    return false;
}

bool UReplayHelperLibrary::BPF_HandleInput(const ABaseReplayController* _controller, const FInputHandleContainer& _inputHandleContainer, bool _bIgnoreAvailability) {
    return false;
}

void UReplayHelperLibrary::BPF_GetAnimSequences(TArray<FAnimSequenceDBEntry>& _outSequencesDB, const FAnimSequenceDBCache& _sequencesCache, const ABaseWeapon* _weapon) {
}

bool UReplayHelperLibrary::BPF_FilterPresetComparison(const FFilterProperties& _first, const FFilterProperties& _second) {
    return false;
}

void UReplayHelperLibrary::BPF_CancelAnyViewportFade(const UObject* _worldContextObject) {
}

bool UReplayHelperLibrary::BPF_AreScreenMessagesEnabled() {
    return false;
}

bool UReplayHelperLibrary::BPF_AreAvailabilityLayersPushed(const FAvailabilityLayerCaches& _inALCaches) {
    return false;
}


