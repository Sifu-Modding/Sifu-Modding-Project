#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SCDelegate.h"
#include "AIComboLaunchParameters.h"
#include "Templates/SubclassOf.h"
#include "AsyncTaskAiLaunchCombo.generated.h"

class UAIActionLaunchCombo;
class UAIFightingComponent;
class UAsyncTaskAiLaunchCombo;

UCLASS(Blueprintable)
class SIFU_API UAsyncTaskAiLaunchCombo : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnFailure;*/
    
    UAsyncTaskAiLaunchCombo();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskAiLaunchCombo* BPF_AIAction_LaunchCombo(UAIFightingComponent* _aiComponent, TSubclassOf<UAIActionLaunchCombo> _actionClass, const FAIComboLaunchParameters& _parameters, UAIActionLaunchCombo*& _action);
    
};

