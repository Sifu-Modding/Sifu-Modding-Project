#include "BaseActorConditionHelpers.h"

class AActor;
class UObject;

UObject* UBaseActorConditionHelpers::BPF_GetInstance(const FBaseActorConditionInstance& _instance) {
    return NULL;
}

bool UBaseActorConditionHelpers::BPF_Evaluate(const FBaseActorConditionInstance& _instance, AActor* _actor, bool _bDefaultResult) {
    return false;
}

UBaseActorConditionHelpers::UBaseActorConditionHelpers() {
}

