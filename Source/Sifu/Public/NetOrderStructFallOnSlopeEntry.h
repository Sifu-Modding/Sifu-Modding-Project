#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FallOnSlopeSetup.h"
#include "HitRequest.h"
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructFallOnSlopeEntry.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FNetOrderStructFallOnSlopeEntry : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFallOnSlopeSetup m_Setup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vSlopeDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitRequest m_HitRequest;
    
    FNetOrderStructFallOnSlopeEntry();
};

