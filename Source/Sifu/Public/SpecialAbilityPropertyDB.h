#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpecialAbilityDelayedLayer.h"
#include "SpecialAbilityPropertyDB.generated.h"

class UAvailabilityLayerData;

UCLASS(BlueprintType)
class SIFU_API USpecialAbilityPropertyDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fSuccessGuardGaugeRefill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAvailabilityLayerData* m_PushLayerOnSuccess;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpecialAbilityDelayedLayer> m_DelayedLayersOnSuccess;
    
    USpecialAbilityPropertyDB();
};

