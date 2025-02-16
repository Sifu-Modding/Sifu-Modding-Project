#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IdleDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UIdleDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fReorientationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fReorientationTimeForEarlyBlendOutFromAttack;
    
    UIdleDB();

};

