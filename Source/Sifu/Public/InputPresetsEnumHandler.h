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
FORCEINLINE uint32 GetTypeHash(const FInputPresetsEnumHandler) { return 0; }

