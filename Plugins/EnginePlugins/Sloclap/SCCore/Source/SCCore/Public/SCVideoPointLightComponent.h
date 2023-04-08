#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/PointLightComponent.h"
#include "SCVideoPointLightComponent.generated.h"

class UCurveLinearColor;
class UMediaTexture;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCVideoPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_FilterAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaTexture* m_MediaTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLengthInSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* m_ColourCurve;
    
    USCVideoPointLightComponent();
    UFUNCTION(BlueprintCallable)
    void OnMediaOpen(const FString& _openedUrl);
    
};

