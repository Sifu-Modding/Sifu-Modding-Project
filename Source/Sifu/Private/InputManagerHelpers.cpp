#include "InputManagerHelpers.h"

UInputManagerHelpers::UInputManagerHelpers() {
}

UInputPad* UInputManagerHelpers::BPF_GetControllerInputPad(ASCPlayerController* _playerController) {
    return NULL;
}

FVector2D UInputManagerHelpers::BPF_GetActionVectorValue(ASCPlayerController* _player, InputAction _eAction, bool _bRaw) {
    return FVector2D{};
}

float UInputManagerHelpers::BPF_GetActionValue(const ASCPlayerController* _player, InputAction _eAction, bool _bRaw) {
    return 0.0f;
}


