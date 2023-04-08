#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
#include "SwapWeaponHandNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API USwapWeaponHandNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
    USwapWeaponHandNotify();
};

