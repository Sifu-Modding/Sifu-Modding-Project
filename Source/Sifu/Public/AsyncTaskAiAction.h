#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SCDelegate.h"
#include "Templates/SubclassOf.h"
#include "AsyncTaskAiAction.generated.h"

class UAIFightingComponent;
class UAsyncTaskAiAction;
class USCAiAction;

UCLASS(Blueprintable)
class SIFU_API UAsyncTaskAiAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnFailure;*/
    
    UAsyncTaskAiAction();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskAiAction* BPF_ScheduleAIAction(UAIFightingComponent* _aiComponent, TSubclassOf<USCAiAction> _actionClass, USCAiAction* _action, USCAiAction*& _scheduledAction, bool _bCancelPendingActions);
    
};

