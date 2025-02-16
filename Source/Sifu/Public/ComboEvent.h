#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ComboEvent.generated.h"

class AFightingCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UComboEvent : public UObject {
    GENERATED_BODY()
public:
    UComboEvent();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString BPE_GetLog();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_Execute(AFightingCharacter* _character);
    
};

