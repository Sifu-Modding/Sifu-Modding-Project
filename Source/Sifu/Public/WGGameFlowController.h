#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=GameFlowController -FallbackName=GameFlowController
#include "GameplayTagContainer.h"
#include "EWGGameFlowMapOption.h"
#include "GameplayTagContainer.h"
#include "WGGameFlowController.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWGGameFlowController : public UObject {
    GENERATED_BODY()
public:
    UWGGameFlowController();
    UFUNCTION(BlueprintPure)
    bool BPF_FindMapOptionInTags(const FGameplayTagContainer& _tagsToSearch, EWGGameFlowMapOption _eMapOption) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FGameplayTag BPE_GetMapOptionTag(EWGGameFlowMapOption _eMapOption) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 BPE_GetHideoutIndexFromTag(FName _hideoutTag) const;
    
};

