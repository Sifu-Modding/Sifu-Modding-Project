#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "RangeFeedbackUserWidget.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API URangeFeedbackUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_RemappingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDefaultAlpha;
    
public:
    URangeFeedbackUserWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnDefaultValuesSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DisplayRangeValueFeedback(float _fValueAlpha);
    
};

