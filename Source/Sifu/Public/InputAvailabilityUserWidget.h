#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "SCUserWidget.h"
#include "InputAvailabilitySignatureDelegate.h"
#include "InputAvailabilityUserWidget.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UInputAvailabilityUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    InputAction m_eInputAction;
    
public:
    UInputAvailabilityUserWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetInputAvailabilityOverride(FInputAvailabilitySignature _delegate);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAvailabilityUpdated(bool _bAvailable);
    
};

