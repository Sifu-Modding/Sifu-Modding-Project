#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BlendProfilePayload.generated.h"

UCLASS(Abstract, Blueprintable)
class SCCORE_API UBlendProfilePayload : public UObject {
    GENERATED_BODY()
public:
    UBlendProfilePayload();
};

