#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "SCComboScrollList.generated.h"

UCLASS(EditInlineNew)
class SIFU_API USCComboScrollList : public USCUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemSelected, int32, SelectedIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FItemSelected OnItemSelected;
    
    USCComboScrollList();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_InitFromStrings(const TArray<FString>& _list, int32 _iSelectedItem);
    
};

