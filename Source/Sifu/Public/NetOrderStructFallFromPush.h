#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "UObject/NoExportTypes.h"
#include "NetOrderStructFallFromPush.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructFallFromPush : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector m_vDirection;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bLethal;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bFromSlope;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vSlopeNormal;
    
    SIFU_API FNetOrderStructFallFromPush();
};

