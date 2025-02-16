#include "BaseActorConditionHelpers.h"

UBaseActorConditionHelpers::UBaseActorConditionHelpers() {
}

UObject* UBaseActorConditionHelpers::BPF_GetInstance(const FBaseActorConditionInstance& _instance) {
    return NULL;
}

bool UBaseActorConditionHelpers::BPF_Evaluate(const FBaseActorConditionInstance& _instance, AActor* _actor, bool _bDefaultResult) {
    return false;
}


