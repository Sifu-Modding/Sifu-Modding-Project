#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BaseActorConditionInstance.h"
#include "BTTaskNodeRelevancyCondition.generated.h"

USTRUCT(BlueprintType)
struct FBTTaskNodeRelevancyCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorConditionInstance m_RelevancyCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBTNodeResult::Type> m_eResultWhenIrrelevant;
    
    SIFU_API FBTTaskNodeRelevancyCondition();
};

