#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpecialAbilityDelayedLayer.h"
#include "SpecialAbilityPropertyDB.generated.h"

class UAvailabilityLayerData;

UCLASS(Blueprintable)
class SIFU_API USpecialAbilityPropertyDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuccessGuardGaugeRefill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_PushLayerOnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialAbilityDelayedLayer> m_DelayedLayersOnSuccess;
    
    USpecialAbilityPropertyDB();

};

