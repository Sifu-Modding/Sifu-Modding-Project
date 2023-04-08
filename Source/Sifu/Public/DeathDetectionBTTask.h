#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "DeathDetectionBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UDeathDetectionBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UDeathDetectionBTTask();
};

