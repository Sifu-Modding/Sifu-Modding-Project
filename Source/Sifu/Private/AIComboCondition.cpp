#include "AIComboCondition.h"

class AActor;
class ASCCharacter;
class UAIFightingComponent;

void UAIComboCondition::BPF_GetEnvQueryParameterValue(FName _paramName, const ASCCharacter* _owner, FSCTypedValue& _outValue) const {
}

bool UAIComboCondition::BPE_TestCondition_Implementation(const UAIFightingComponent* _aiComponent, const AActor* _target) const {
    return false;
}


UAIComboCondition::UAIComboCondition() {
}

