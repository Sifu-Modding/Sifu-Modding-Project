#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AbilityPayload.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UAbilityPayload : public UObject {
    GENERATED_BODY()
public:
    UAbilityPayload();

};

