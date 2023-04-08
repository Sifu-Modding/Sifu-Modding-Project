#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=GameFlowController -FallbackName=GameFlowController
#include "EWGGameFlowMapOption.h"
#include "WGGameFlowController.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWGGameFlowController : public UObject {
    GENERATED_BODY()
public:
    UWGGameFlowController();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_FindMapOptionInTags(const FGameplayTagContainer& _tagsToSearch, EWGGameFlowMapOption _eMapOption) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGameplayTag BPE_GetMapOptionTag(EWGGameFlowMapOption _eMapOption) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 BPE_GetHideoutIndexFromTag(FName _hideoutTag) const;
    
};

