#include "InputBehaviourStruct.h"

FInputBehaviourStruct::FInputBehaviourStruct() {
    this->m_Behavior = InputBehavior::JustPressed;
    this->m_fTimePressed = 0.00f;
    this->m_bAutoReset = false;
    this->m_bRegisterPressTimeOnStack = false;
    this->m_bRemovePressedTimeFromTimeLeft = false;
}

