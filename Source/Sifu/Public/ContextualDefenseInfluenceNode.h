#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AIConditionedAction.h"
#include "AIInfluenceNode.h"
#include "ContextualDefenseInfluenceNode.generated.h"

class USCAITriggerableActions;

UCLASS(Blueprintable)
class SIFU_API UContextualDefenseInfluenceNode : public UAIInfluenceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_TagsToFlushOnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_TagsToRaiseOnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFlushThrowAttackMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMemoryFlushLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLaunchDefaultActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_InfluenceNodeName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USCAITriggerableActions*> m_ActionsToTriggerOnValidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIConditionedAction> m_ActionsOnSuccess;
    
public:
    UContextualDefenseInfluenceNode();
};

