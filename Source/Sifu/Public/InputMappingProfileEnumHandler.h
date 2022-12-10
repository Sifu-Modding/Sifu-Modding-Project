#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "InputMappingProfileEnumHandler.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingProfileEnumHandler : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    SIFU_API FInputMappingProfileEnumHandler();
};

