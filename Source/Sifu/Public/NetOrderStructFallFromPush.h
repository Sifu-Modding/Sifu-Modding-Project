#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructFallFromPush.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructFallFromPush : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLethal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFromSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vSlopeNormal;
    
    SIFU_API FNetOrderStructFallFromPush();
};

