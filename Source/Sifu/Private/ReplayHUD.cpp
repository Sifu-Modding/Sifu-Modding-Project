#include "ReplayHUD.h"

AReplayHUD::AReplayHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->m_CurrentTexture = NULL;
}

void AReplayHUD::OnAssetsLoaded(const TArray<TSoftObjectPtr<UObject>>& _items) {
}

void AReplayHUD::BPF_SetTextureToDraw(const FScreenTextureData& _screenTexture) {
}

void AReplayHUD::BPF_SetTextureLocation(EScreenLocation _eTextureLocation) {
}

void AReplayHUD::BPF_SetDrawTextureEnabled(bool _bEnabled) {
}


