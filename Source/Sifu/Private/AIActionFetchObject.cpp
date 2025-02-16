#include "AIActionFetchObject.h"

UAIActionFetchObject::UAIActionFetchObject() {
    this->m_bFetchClosestWeaponIfNotSet = true;
    this->m_bUsePerceptionToFindWeapon = false;
    this->m_ObjectToFetch = NULL;
}

void UAIActionFetchObject::OnPickupStarting(uint8 _uiOrderId, UOrderComponent* _OrderComponent) {
}

void UAIActionFetchObject::BPF_SetObjectToFetch(AActor* _objectToFetch) {
}


