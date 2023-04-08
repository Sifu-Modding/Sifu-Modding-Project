#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SCDelegate.h"
#include "InputAction.h"
#include "AsyncWaitForInputAvailability.generated.h"

class ABaseCharacter;
class UAsyncWaitForInputAvailability;

UCLASS(Blueprintable)
class SIFU_API UAsyncWaitForInputAvailability : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnInputAvailable;*/
    
    UAsyncWaitForInputAvailability();
    UFUNCTION(BlueprintCallable)
    static UAsyncWaitForInputAvailability* BPF_WaitForInputAvailability(ABaseCharacter* _inCharacter, InputAction _eInInputAction);
    
};

