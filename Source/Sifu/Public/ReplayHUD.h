#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "EScreenLocation.h"
#include "ScreenTextureData.h"
#include "ReplayHUD.generated.h"

class UObject;
class UTexture2D;

UCLASS(Blueprintable, NonTransient)
class SIFU_API AReplayHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScreenTextureData m_TextureToDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* m_CurrentTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> m_LoadingTextures;
    
public:
    AReplayHUD();
protected:
    UFUNCTION(BlueprintCallable)
    void OnAssetsLoaded(const TArray<TSoftObjectPtr<UObject>>& _items);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetTextureToDraw(const FScreenTextureData& _screenTexture);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetTextureLocation(EScreenLocation _eTextureLocation);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDrawTextureEnabled(bool _bEnabled);
    
};

