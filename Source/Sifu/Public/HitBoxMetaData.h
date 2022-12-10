#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HitBoxMetaData.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API UHitBoxMetaData : public UObject {
    GENERATED_BODY()
public:
    UHitBoxMetaData();
};

