#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AIBaseBehaviourDataAsset.generated.h"

UCLASS()
class SIFU_API UAIBaseBehaviourDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fProbabilityDepletedPerSecond;
    
    UPROPERTY(EditAnywhere)
    float m_fMinProbability;
    
    UPROPERTY(EditAnywhere)
    float m_fInitialProbability;
    
    UPROPERTY(EditAnywhere)
    float m_fCooldown;
    
    UAIBaseBehaviourDataAsset();
};

