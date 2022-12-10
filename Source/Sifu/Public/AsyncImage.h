#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "AsyncImage.generated.h"

class UMaterialInterface;
class UAsyncImage;
class UTexture2D;

UCLASS()
class UAsyncImage : public UImage {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncImageDelegate, UAsyncImage*, _image);
    
    UPROPERTY(BlueprintAssignable)
    FAsyncImageDelegate OnLoadingStarted;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncImageDelegate OnLoadingCanceled;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncImageDelegate OnLoaded;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_AsyncAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fApparitionDuration;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UMaterialInterface> m_AsyncMaterial;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bMatchSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bHideOnLoadStart;
    
public:
    UAsyncImage();
    UFUNCTION(BlueprintCallable)
    void BPF_SetTexture(UTexture2D* _asset, bool _bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMaterial(UMaterialInterface* _asset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadTextureAssetAsync(TSoftObjectPtr<UTexture2D> _asset, bool _bMatchSize, int32 _iQueueID, bool _bForce);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadMaterialAssetAsync(TSoftObjectPtr<UMaterialInterface> _asset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Clear();
    
};

