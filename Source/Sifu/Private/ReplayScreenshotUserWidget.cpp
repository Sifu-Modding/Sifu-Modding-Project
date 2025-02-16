#include "ReplayScreenshotUserWidget.h"

UReplayScreenshotUserWidget::UReplayScreenshotUserWidget() {
    this->m_bTakeScreenshotOnCooldown = false;
}

void UReplayScreenshotUserWidget::BPF_RequestScreenshot(int32 _iResolutionX, int32 _iResolutionY) {
}

ABaseReplayController* UReplayScreenshotUserWidget::BPF_GetReplayController() const {
    return NULL;
}

void UReplayScreenshotUserWidget::BPE_OnScreenshotRequestProcessed_Implementation() {
}



