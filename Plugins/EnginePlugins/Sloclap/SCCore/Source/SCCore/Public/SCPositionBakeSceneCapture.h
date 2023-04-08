#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCPositionBakeSceneCapture.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class USCCaptureComponent2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class SCCORE_API ASCPositionBakeSceneCapture : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCCaptureComponent2D* m_SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iDebugSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iBakedPositionTextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_BakedLocalPositionDrawer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_BakedPreSkinnedPositionDrawer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinusZDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MinusZDistanceParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TextureSizeParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BoundsMinParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BoundsMaxParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ChannelUVParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* m_BakedPositionTextureTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_BakedLocalPositionDrawerInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_BakedPreSkinnedPositionDrawerInstanceDynamic;
    
public:
    ASCPositionBakeSceneCapture();
};

