#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "InputAvailabilitySignatureDelegate.h"
#include "SCUserWidget.h"
#include "InputAvailabilityUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UInputAvailabilityUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eInputAction;
    
public:
    UInputAvailabilityUserWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetInputAvailabilityOverride(FInputAvailabilitySignature _delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAvailabilityUpdated(bool _bAvailable);
    
};

