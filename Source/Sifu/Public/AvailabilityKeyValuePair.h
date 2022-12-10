#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFightingActionState.h"
#include "AvailabilityKeyValuePair.generated.h"

class UAvailabilityLayerData;

UCLASS()
class SIFU_API UAvailabilityKeyValuePair : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFightingActionState m_eFightingActionState;
    
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_Data;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideAllLayers;
    
    UAvailabilityKeyValuePair();
};

