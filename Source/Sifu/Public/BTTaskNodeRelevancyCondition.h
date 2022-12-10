#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTaskNodeRelevancyCondition.generated.h"

USTRUCT(BlueprintType)
struct FBTTaskNodeRelevancyCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_RelevancyCondition;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBTNodeResult::Type> m_eResultWhenIrrelevant;
    
    SIFU_API FBTTaskNodeRelevancyCondition();
};

