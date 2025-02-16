#include "SCPositionBakeSceneCapture.h"
#include "SCCaptureComponent2D.h"

ASCPositionBakeSceneCapture::ASCPositionBakeSceneCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USCCaptureComponent2D>(TEXT("SceneCaptureComponent_BakePosition"));
    this->m_SceneCaptureComponent = (USCCaptureComponent2D*)RootComponent;
    this->m_iDebugSwitch = 0;
    this->m_iBakedPositionTextureSize = 1024;
    this->m_BakedLocalPositionDrawer = NULL;
    this->m_BakedPreSkinnedPositionDrawer = NULL;
    this->m_fMinusZDistance = 10000.00f;
    this->m_MinusZDistanceParameterName = TEXT("Minus Z Distance");
    this->m_TextureSizeParameterName = TEXT("Size");
    this->m_BoundsMinParameterName = TEXT("BoundsMin");
    this->m_BoundsMaxParameterName = TEXT("BoundsMax");
    this->m_ChannelUVParameterName = TEXT("ChannelUV");
    this->m_BakedPositionTextureTarget = NULL;
    this->m_BakedLocalPositionDrawerInstanceDynamic = NULL;
    this->m_BakedPreSkinnedPositionDrawerInstanceDynamic = NULL;
}


