#include "ComboTransitionHelper.h"

UComboTransitionHelper::UComboTransitionHelper() {
}

EComboTransition UComboTransitionHelper::BPF_GetTransitionFromInput(InputAction _eInput) {
    return EComboTransition::Light;
}

InputAction UComboTransitionHelper::BPF_GetInputFromTransition(EComboTransition _eTransition) {
    return InputAction::AttackLight;
}


