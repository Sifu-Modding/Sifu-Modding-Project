#include "OrderServiceNotifyState.h"
#include "Templates/SubclassOf.h"

UOrderServiceNotifyState::UOrderServiceNotifyState() {
    this->m_bTickFrozen = false;
    this->m_ServiceClass = NULL;
    this->m_ServiceInstanced = NULL;
    this->m_activationCondition = NULL;
}

TSubclassOf<UOrderService> UOrderServiceNotifyState::GetServiceClass(bool _bIncludeInstanced) const {
    return NULL;
}


