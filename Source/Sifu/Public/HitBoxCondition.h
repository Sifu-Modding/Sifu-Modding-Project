#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HitBoxCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UHitBoxCondition : public UObject {
    GENERATED_BODY()
public:
    UHitBoxCondition();
};

