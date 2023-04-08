#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RushAttackDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API URushAttackDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRushAttackMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFailedAttackRushFalseTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRushAttackTrackingAngle;
    
    URushAttackDB();
};

