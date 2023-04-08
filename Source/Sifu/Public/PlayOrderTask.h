#pragma once
#include "CoreMinimal.h"
#include "SCBTTaskNode.h"
#include "PlayOrderTask.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UPlayOrderTask : public USCBTTaskNode {
    GENERATED_BODY()
public:
    UPlayOrderTask();
};

