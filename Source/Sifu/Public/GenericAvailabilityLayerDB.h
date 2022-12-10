#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EALBinaryOperation.h"
#include "GenericAvailabilityLayerDB.generated.h"

class UAvailabilityLayerData;

UCLASS(BlueprintType)
class SIFU_API UGenericAvailabilityLayerDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UPROPERTY(EditAnywhere)
    EALBinaryOperation m_eALBinaryOperation;
    
    UGenericAvailabilityLayerDB();
};

