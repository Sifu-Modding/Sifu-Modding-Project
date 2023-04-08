#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ChangePhaseBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UChangePhaseBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UChangePhaseBTTask();
};

