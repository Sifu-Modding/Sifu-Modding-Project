#include "SCVideoRectLightComponent.h"

USCVideoRectLightComponent::USCVideoRectLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_MediaTex = NULL;
    this->m_fLengthInSecond = 1.00f;
    this->m_ColourCurve = NULL;
}

void USCVideoRectLightComponent::OnMediaOpen(const FString& _openedUrl) {
}


