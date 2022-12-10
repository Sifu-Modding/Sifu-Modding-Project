#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ScreenTextureData.h"
#include "EScreenLocation.h"
#include "ReplayHUD.generated.h"

class UTexture2D;
class UObject;

UCLASS(NonTransient)
class SIFU_API AReplayHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FScreenTextureData m_TextureToDraw;
    
    UPROPERTY(Transient)
    UTexture2D* m_CurrentTexture;
    
    UPROPERTY(Transient)
    TArray<TSoftObjectPtr<UTexture2D>> m_LoadingTextures;
    
public:
    AReplayHUD();
protected:
    UFUNCTION()
    void OnAssetsLoaded(const TArray<TSoftObjectPtr<UObject>>& _items);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetTextureToDraw(const FScreenTextureData& _screenTexture);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetTextureLocation(EScreenLocation _eTextureLocation);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDrawTextureEnabled(bool _bEnabled);
    
};

