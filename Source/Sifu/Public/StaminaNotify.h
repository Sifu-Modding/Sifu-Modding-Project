#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "StaminaNotify.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class SIFU_API UStaminaNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UStaminaNotify();

};

