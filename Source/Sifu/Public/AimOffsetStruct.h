#pragma once
#include "CoreMinimal.h"
#include "AimOffsetStruct.generated.h"

class UAimOffsetBlendSpace;

USTRUCT(BlueprintType)
struct FAimOffsetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimOffsetBlendSpace* m_aimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxHeadDiffYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxHeadDiffPitch;
    
    SIFU_API FAimOffsetStruct();
};

