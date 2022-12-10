#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "SCDataAdviserEnumHandler.generated.h"

USTRUCT(BlueprintType)
struct FSCDataAdviserEnumHandler : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    SCCORE_API FSCDataAdviserEnumHandler();
};

