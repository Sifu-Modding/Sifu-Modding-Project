#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SCDelegate.h"
#include "AsyncTaskAiAction.generated.h"

class UAsyncTaskAiAction;
class USCAiAction;
class UAIFightingComponent;

UCLASS()
class SIFU_API UAsyncTaskAiAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnFailure;*/
    
    UAsyncTaskAiAction();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskAiAction* BPF_ScheduleAIAction(UAIFightingComponent* _aiComponent, TSubclassOf<USCAiAction> _actionClass, USCAiAction* _action, USCAiAction*& _scheduledAction, bool _bCancelPendingActions);
    
};

