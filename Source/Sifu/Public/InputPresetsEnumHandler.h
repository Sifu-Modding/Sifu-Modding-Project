#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "InputPresetsEnumHandler.generated.h"

USTRUCT(BlueprintType)
struct FInputPresetsEnumHandler : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    SIFU_API FInputPresetsEnumHandler();
};

