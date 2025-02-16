#include "OrderServiceActivationConditions.h"

UOrderServiceActivationConditions::UOrderServiceActivationConditions() {
}

bool UOrderServiceActivationConditions::BPE_CanActivate_Implementation(uint8 _uiOrderId, const ABaseCharacter* _owner) const {
    return false;
}


