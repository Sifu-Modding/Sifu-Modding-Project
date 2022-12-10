#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RushAttackDB.generated.h"

UCLASS()
class SIFU_API URushAttackDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fRushAttackMinTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bFailedAttackRushFalseTracking;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRushAttackTrackingAngle;
    
    URushAttackDB();
};

