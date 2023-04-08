#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EBlendSpaceParamComputeType.h"
#include "WeaponBlendSpaceParam.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FWeaponBlendSpaceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlendSpaceParamComputeType m_eBlendSpaceParamComputeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_customRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DistanceRefBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DistanceTargetBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vDistanceOffset;
    
    FWeaponBlendSpaceParam();
};

