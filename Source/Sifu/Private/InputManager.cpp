#include "InputManager.h"

class ASCPlayerController;
class UObject;

void UInputManager::BPF_ResetAction(UObject* _requester, const ASCPlayerController* _playerController, InputAction _eInputAction) {
}

void UInputManager::BPF_FlushAction(UObject* _requester, const ASCPlayerController* _playerController, InputAction _eInputAction) {
}

void UInputManager::BPF_ConsumeAction(UObject* _requester, const ASCPlayerController* _playerController, InputAction _eInputAction) {
}

UInputManager::UInputManager() {
    this->m_inputsDB = NULL;
}

