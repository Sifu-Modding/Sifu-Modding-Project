#include "InteractionDetectionComponent.h"
#include "Templates/SubclassOf.h"

class AActor;
class UInteractionObjectComponent;

TMap<UInteractionObjectComponent*, FInteractionHintInfo> UInteractionDetectionComponent::BPF_GetInteractionHintInfos() const {
    return TMap<UInteractionObjectComponent*, FInteractionHintInfo>();
}

TArray<UInteractionObjectComponent*> UInteractionDetectionComponent::BPF_GetInteractionHintComponent() const {
    return TArray<UInteractionObjectComponent*>();
}

AActor* UInteractionDetectionComponent::BPF_GetCurrentInteractiveObject() const {
    return NULL;
}

UInteractionObjectComponent* UInteractionDetectionComponent::BPF_GetCurrentInteractiveComponent() const {
    return NULL;
}

void UInteractionDetectionComponent::BPF_DisableInteractionWithObjects(TSubclassOf<AActor> _actorToDisable) {
}

void UInteractionDetectionComponent::BPF_AllowInteractionWithObjects(TSubclassOf<AActor> _actorToEnable) {
}

UInteractionDetectionComponent::UInteractionDetectionComponent() {
    this->m_fAngleThresholdWalking = 0.00f;
    this->m_fAngleThresholdRunning = 0.00f;
    this->m_fCatchFrontRangeWalking = 0.00f;
    this->m_fCatchBackRangeWalking = 0.00f;
    this->m_fCatchFrontRangeRunning = 0.00f;
    this->m_fCatchBackRangeRunning = 0.00f;
    this->m_fInteractionHintDist = 0.00f;
    this->m_bShowOnlyVisibleHint = true;
    this->m_bShowOnlyUsableHint = true;
}

