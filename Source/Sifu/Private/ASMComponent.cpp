#include "ASMComponent.h"

UASMComponent::UASMComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

EFightingActionState UASMComponent::BPF_GetCurrentActionState() const {
    return EFightingActionState::None;
}


