#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "HitRequest.h"
#include "FallOnSlopeSetup.h"
#include "UObject/NoExportTypes.h"
#include "NetOrderStructFallOnSlopeEntry.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FNetOrderStructFallOnSlopeEntry : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FFallOnSlopeSetup m_Setup;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vSlopeDir;
    
    UPROPERTY(BlueprintReadOnly)
    FHitRequest m_HitRequest;
    
    FNetOrderStructFallOnSlopeEntry();
};

