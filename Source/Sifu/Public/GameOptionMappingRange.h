#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameOptionMappingRange.generated.h"

USTRUCT(BlueprintType)
struct FGameOptionMappingRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDefaultValue;
    
    SIFU_API FGameOptionMappingRange();
};

