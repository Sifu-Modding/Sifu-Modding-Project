#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "UObject/NoExportTypes.h"
#include "SCVideoPointLightComponent.generated.h"

class UMediaTexture;
class UCurveLinearColor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCVideoPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor m_FilterAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMediaTexture* m_MediaTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLengthInSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveLinearColor* m_ColourCurve;
    
    USCVideoPointLightComponent();
    UFUNCTION()
    void OnMediaOpen(const FString& _openedUrl);
    
};

