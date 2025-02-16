#include "HUDObjectiveIndicator.h"

UHUDObjectiveIndicator::UHUDObjectiveIndicator() {
    this->m_TargetActor = NULL;
    this->m_indicatorPanelSlot = NULL;
    this->m_indicatorArrowWidget = NULL;
    this->m_bIsShown = true;
}

void UHUDObjectiveIndicator::OnTargetBehaviorChanged(EGlobalBehaviors _NewBehavior, const bool _bFromDialog) {
}

void UHUDObjectiveIndicator::BPF_SetTarget(AFightingCharacter* _target) {
}



