#include "DistributionStatCompareWidget.h"

class UPreviewData;
class UStatsComponent;

UStatsComponent* UDistributionStatCompareWidget::BPF_GetStatsComponent() {
    return NULL;
}

UPreviewData* UDistributionStatCompareWidget::BPF_GetPreviewData() const {
    return NULL;
}

UDistributionStatCompareWidget::UDistributionStatCompareWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_PreviewData = NULL;
}

