#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EALBinaryOperation.h"
#include "GenericAvailabilityLayerDB.generated.h"

class UAvailabilityLayerData;

UCLASS(Blueprintable)
class SIFU_API UGenericAvailabilityLayerDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EALBinaryOperation m_eALBinaryOperation;
    
    UGenericAvailabilityLayerDB();

};

