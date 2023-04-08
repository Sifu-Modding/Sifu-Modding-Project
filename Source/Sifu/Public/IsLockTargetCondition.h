#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "IsLockTargetCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UIsLockTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UIsLockTargetCondition();
};

