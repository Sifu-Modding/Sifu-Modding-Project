#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "PatrolBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UPatrolBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_MovingAIActionTag;
    
public:
    UPatrolBTTask();

};

