#pragma once
#include "CoreMinimal.h"
#include "AttackIKProfileInfos.h"
#include "AttackIKLimbProfiles.generated.h"

USTRUCT(BlueprintType)
struct FAttackIKLimbProfiles {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackIKProfileInfos m_Profiles[2];
    
    SIFU_API FAttackIKLimbProfiles();
};

