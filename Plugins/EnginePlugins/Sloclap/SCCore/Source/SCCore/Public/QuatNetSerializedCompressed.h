#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuatNetSerializedCompressed.generated.h"

USTRUCT(BlueprintType)
struct FQuatNetSerializedCompressed : public FQuat {
    GENERATED_BODY()
public:
    SCCORE_API FQuatNetSerializedCompressed();
};

