#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IdleDB.generated.h"

UCLASS()
class SIFU_API UIdleDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fReorientationTime;
    
    UPROPERTY(EditAnywhere)
    float m_fReorientationTimeForEarlyBlendOutFromAttack;
    
    UIdleDB();
};

