#pragma once
#include "CoreMinimal.h"
#include "ChargedBuildUpStructGenericInfos.generated.h"

USTRUCT(BlueprintType)
struct FChargedBuildUpStructGenericInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDurationOfCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fExtraHoldingTimeAfterChargeIscomplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowQuadrantToRecompute;
    
    SIFU_API FChargedBuildUpStructGenericInfos();
};

