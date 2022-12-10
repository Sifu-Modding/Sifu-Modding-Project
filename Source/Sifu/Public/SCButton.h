#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "ButtonUnFocusedDelegate.h"
#include "ButtonFocusedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "SCButton.generated.h"

UCLASS()
class SIFU_API USCButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FButtonFocused OnFocusReceived;
    
    UPROPERTY(BlueprintAssignable)
    FButtonUnFocused OnFocusLost;
    
    USCButton();
    UFUNCTION(BlueprintCallable)
    void BPF_SetOverrideFocusTints(FLinearColor _focusedColor, FLinearColor _noFocusColor);
    
};

