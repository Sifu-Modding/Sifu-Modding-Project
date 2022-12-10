#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "VariableWeightEnumHandler.generated.h"

USTRUCT(BlueprintType)
struct FVariableWeightEnumHandler : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    SIFU_API FVariableWeightEnumHandler();
};

