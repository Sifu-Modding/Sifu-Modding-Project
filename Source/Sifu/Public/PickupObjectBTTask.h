#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "PickupObjectBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UPickupObjectBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPickupObjectBTTask();
};

