#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "PatrolBTTask.generated.h"

UCLASS()
class SIFU_API UPatrolBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_MovingAIActionTag;
    
public:
    UPatrolBTTask();
};

