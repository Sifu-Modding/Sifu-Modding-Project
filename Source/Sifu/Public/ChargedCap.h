#pragma once
#include "CoreMinimal.h"
#include "ChargedOverridingHitBox.h"
#include "FrameRange.h"
#include "ChargedCap.generated.h"

USTRUCT(BlueprintType)
struct FChargedCap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRange m_FrameRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChargedOverridingHitBox> m_HitBoxes;
    
    SIFU_API FChargedCap();
};

