#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "NotifyAttackFinishedBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UNotifyAttackFinishedBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UNotifyAttackFinishedBTTask();
};

