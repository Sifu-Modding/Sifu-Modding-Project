#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "DeathStandupAnimationFromAnimation.h"
#include "DeathStandupAnimations.generated.h"

USTRUCT(BlueprintType)
struct FDeathStandupAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_FaceDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_FaceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_SideLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_SideRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinFaceAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathStandupAnimationFromAnimation> m_SpecialCases;
    
    SIFU_API FDeathStandupAnimations();
};

