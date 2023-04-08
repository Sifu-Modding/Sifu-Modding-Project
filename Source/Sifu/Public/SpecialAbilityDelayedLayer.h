#pragma once
#include "CoreMinimal.h"
#include "SpecialAbilityDelayedLayer.generated.h"

class UAvailabilityLayerData;

USTRUCT(BlueprintType)
struct SIFU_API FSpecialAbilityDelayedLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_PushLayerOnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPushLayerDelay;
    
    FSpecialAbilityDelayedLayer();
};

