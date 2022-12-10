#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameOptionMappingRange.generated.h"

USTRUCT(BlueprintType)
struct FGameOptionMappingRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FFloatRange m_Range;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDefaultValue;
    
    SIFU_API FGameOptionMappingRange();
};

