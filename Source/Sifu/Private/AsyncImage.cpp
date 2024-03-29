#include "AsyncImage.h"

class UMaterialInterface;
class UTexture2D;

void UAsyncImage::BPF_SetTexture(UTexture2D* _asset, bool _bMatchSize) {
}

void UAsyncImage::BPF_SetMaterial(UMaterialInterface* _asset) {
}

void UAsyncImage::BPF_LoadTextureAssetAsync(TSoftObjectPtr<UTexture2D> _asset, bool _bMatchSize, int32 _iQueueID, bool _bForce) {
}

void UAsyncImage::BPF_LoadMaterialAssetAsync(TSoftObjectPtr<UMaterialInterface> _asset) {
}

void UAsyncImage::BPF_Clear() {
}

UAsyncImage::UAsyncImage() {
    this->m_fApparitionDuration = 0.20f;
    this->m_bMatchSize = true;
    this->m_bHideOnLoadStart = true;
}

