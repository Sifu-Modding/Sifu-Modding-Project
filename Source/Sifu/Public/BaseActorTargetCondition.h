#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseActorTargetCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UBaseActorTargetCondition : public UObject {
    GENERATED_BODY()
public:
    UBaseActorTargetCondition();
};

