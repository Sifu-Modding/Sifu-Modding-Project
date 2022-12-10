#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "SCTechAdviserEnumHandler.generated.h"

USTRUCT(BlueprintType)
struct FSCTechAdviserEnumHandler : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    SCCORE_API FSCTechAdviserEnumHandler();
};

