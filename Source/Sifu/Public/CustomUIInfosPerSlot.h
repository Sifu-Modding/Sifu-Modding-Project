#pragma once
#include "CoreMinimal.h"
#include "EControllerIconAxisTypes.h"
#include "CustomUIInfosPerSlot.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCustomUIInfosPerSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerIconAxisTypes m_AxisTypes;
    
    FCustomUIInfosPerSlot();
};

