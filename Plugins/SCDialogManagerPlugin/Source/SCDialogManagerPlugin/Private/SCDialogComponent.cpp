#include "SCDialogComponent.h"

USCDialogComponent::USCDialogComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ContextualDb = NULL;
}

bool USCDialogComponent::BPF_InitBlackBoardFromAsset(UBlackboardData* _data) {
    return false;
}


