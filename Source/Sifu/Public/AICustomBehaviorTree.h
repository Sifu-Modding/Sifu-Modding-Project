#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AICustomBehaviorTree.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FAICustomBehaviorTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_DynamicBehaviorGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* m_BehaviorToUse;
    
    SIFU_API FAICustomBehaviorTree();
};

