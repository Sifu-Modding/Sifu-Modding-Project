#include "ReplayLoadingScreenWidget.h"

void UReplayLoadingScreenWidget::BPF_NotifyHideCompleted() {
}



UReplayLoadingScreenWidget::UReplayLoadingScreenWidget() {
    this->m_iZIndex = 0;
    this->m_bIsHidding = false;
}

