#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "MenuLoading.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UMenuLoading : public USCUserWidget {
    GENERATED_BODY()
public:
    UMenuLoading();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Reinit();
    
};

