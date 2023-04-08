#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CardinalSpeed.generated.h"

USTRUCT(BlueprintType)
struct FCardinalSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCommonSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_CommonSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_CardinalSpeeds[4];
    
    SIFU_API FCardinalSpeed();
};

