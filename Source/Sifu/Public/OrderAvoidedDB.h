#pragma once
#include "CoreMinimal.h"
#include "AvailabilityLayerContainer.h"
#include "OrderDB.h"
#include "Templates/SubclassOf.h"
#include "OrderAvoidedDB.generated.h"

class UOrderServiceActivationConditions;

UCLASS(Blueprintable)
class SIFU_API UOrderAvoidedDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOrderServiceActivationConditions> m_activationCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvertCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerContainer m_AvailabilityInfo;
    
    UOrderAvoidedDB();
};

