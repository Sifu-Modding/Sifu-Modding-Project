#pragma once
#include "CoreMinimal.h"
#include "HUDUserWidget.h"
#include "GetPercentageDelegateDelegate.h"
#include "Gauge.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UGauge : public UHUDUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fPercentage;
    
private:
    UPROPERTY()
    FGetPercentageDelegate m_fPercentageDelegate;
    
public:
    UGauge();
};

