#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCVideoLightManager.generated.h"

class UCanvas;
class UCurveLinearColor;
class ULocalLightComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMediaSource;
class UMediaTexture;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class SCCORE_API USCVideoLightManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> m_RTChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_SamplerMaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_SamplerMaterialBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCanvas* m_CanvasTarget;
    
    USCVideoLightManager();
    UFUNCTION(BlueprintCallable)
    static void PreCache(UMediaTexture* MediaTex, UMediaSource* MediaSource, UMaterialInterface* SamplerMaterialBase);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ExportCurveFromLight(ULocalLightComponent* LightComponentToFind, UCurveLinearColor* curveToFill);
    
};

