#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "GenericErrorPopupWidget.generated.h"

class UPopupWidget;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UGenericErrorPopupWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UGenericErrorPopupWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPopupWidget* BPE_GetPopupWidget();
    
};

