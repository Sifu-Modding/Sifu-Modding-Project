#include "WeaponDestructionComponent.h"

UWeaponDestructionComponent::UWeaponDestructionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fDelayForCurrentOrderStop = 0.30f;
}

int32 UWeaponDestructionComponent::BPF_GetNumDamagedWeaponIndex() const {
    return 0;
}

int32 UWeaponDestructionComponent::BPF_GetDamagedWeaponIndex() const {
    return 0;
}


