#pragma once
#include "CoreMinimal.h"
#include "DeathAnimAttackPowerArray.h"
#include "DeathAnimQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FDeathAnimQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathAnimAttackPowerArray m_Array[4];
    
    SIFU_API FDeathAnimQuadrantArray();
};

