#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceNode.h"
#include "GameplayTagContainer.h"
#include "AIConditionedAction.h"
#include "ContextualDefenseInfluenceNode.generated.h"

class USCAITriggerableActions;

UCLASS()
class SIFU_API UContextualDefenseInfluenceNode : public UAIInfluenceNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer m_TagsToFlushOnSuccess;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer m_TagsToRaiseOnSuccess;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bFlushThrowAttackMemory;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMemoryFlushLimit;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bLaunchDefaultActions;
    
    UPROPERTY(EditAnywhere)
    FName m_InfluenceNodeName;
    
private:
    UPROPERTY(Instanced)
    TArray<USCAITriggerableActions*> m_ActionsToTriggerOnValidation;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIConditionedAction> m_ActionsOnSuccess;
    
public:
    UContextualDefenseInfluenceNode();
};

