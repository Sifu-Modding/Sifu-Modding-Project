#include "SCVideoLightManager.h"

class UCurveLinearColor;
class ULocalLightComponent;
class UMaterialInterface;
class UMediaSource;
class UMediaTexture;

void USCVideoLightManager::PreCache(UMediaTexture* MediaTex, UMediaSource* MediaSource, UMaterialInterface* SamplerMaterialBase) {
}

void USCVideoLightManager::BPF_ExportCurveFromLight(ULocalLightComponent* LightComponentToFind, UCurveLinearColor* curveToFill) {
}

USCVideoLightManager::USCVideoLightManager() {
    this->m_RTChain.AddDefaulted(2);
    this->m_SamplerMaterialInstanceDynamic = NULL;
    this->m_SamplerMaterialBase = NULL;
    this->m_CanvasTarget = NULL;
}

