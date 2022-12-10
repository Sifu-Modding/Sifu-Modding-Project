#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SCDelegate.h"
#include "InputAction.h"
#include "AsyncWaitForInputAvailability.generated.h"

class UAsyncWaitForInputAvailability;
class ABaseCharacter;

UCLASS()
class SIFU_API UAsyncWaitForInputAvailability : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnInputAvailable;*/
    
    UAsyncWaitForInputAvailability();
    UFUNCTION(BlueprintCallable)
    static UAsyncWaitForInputAvailability* BPF_WaitForInputAvailability(ABaseCharacter* _inCharacter, InputAction _eInInputAction);
    
};

