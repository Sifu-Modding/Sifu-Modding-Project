#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "AngleFeedbackUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAngleFeedbackUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UAngleFeedbackUserWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DisplayAngleFeedback(float _fAngle);
    
};

