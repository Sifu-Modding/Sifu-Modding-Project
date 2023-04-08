#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "HittedBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UHittedBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UHittedBTTask();
};

