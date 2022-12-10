#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AICustomBehaviorTree.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FAICustomBehaviorTree {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_DynamicBehaviorGameplayTag;
    
    UPROPERTY(EditAnywhere)
    UBehaviorTree* m_BehaviorToUse;
    
    SIFU_API FAICustomBehaviorTree();
};

