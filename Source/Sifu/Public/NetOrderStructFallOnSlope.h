#pragma once
#include "CoreMinimal.h"
#include "FallOnSlopeSetup.h"
#include "NetOrderStruct.h"
#include "NetOrderStructFallOnSlope.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructFallOnSlope : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFallOnSlopeSetup m_Setup;
    
    SIFU_API FNetOrderStructFallOnSlope();
};

