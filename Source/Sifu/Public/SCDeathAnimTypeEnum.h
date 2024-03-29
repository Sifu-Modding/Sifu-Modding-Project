#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "SCDeathAnimTypeEnum.generated.h"

USTRUCT(BlueprintType)
struct FSCDeathAnimTypeEnum : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    SIFU_API FSCDeathAnimTypeEnum();
};
FORCEINLINE uint32 GetTypeHash(const FSCDeathAnimTypeEnum) { return 0; }

