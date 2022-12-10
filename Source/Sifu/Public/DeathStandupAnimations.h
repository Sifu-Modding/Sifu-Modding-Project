#pragma once
#include "CoreMinimal.h"
#include "DeathStandupAnimationFromAnimation.h"
#include "AnimContainer.h"
#include "DeathStandupAnimations.generated.h"

USTRUCT(BlueprintType)
struct FDeathStandupAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_FaceDown;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_FaceUp;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_SideLeft;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_SideRight;
    
    UPROPERTY(EditAnywhere)
    float m_fMinFaceAngle;
    
    UPROPERTY(EditAnywhere)
    TArray<FDeathStandupAnimationFromAnimation> m_SpecialCases;
    
    SIFU_API FDeathStandupAnimations();
};

