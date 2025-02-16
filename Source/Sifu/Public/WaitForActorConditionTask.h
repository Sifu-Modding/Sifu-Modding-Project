#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BaseActorConditionInstance.h"
#include "WaitForActorConditionTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWaitForActorConditionTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxWaitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorConditionInstance m_condition;
    
    UWaitForActorConditionTask();

};

