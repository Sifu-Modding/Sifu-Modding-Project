#pragma once
#include "CoreMinimal.h"
#include "AssociatedPropsAnimInfo.h"
#include "EWeaponAnimType.h"
#include "EWeaponBlendSpaceComputeTime.h"
#include "EWeaponOrientationConstraint.h"
#include "WeaponBlendSpaceParam.h"
#include "WeaponAnimInfo.generated.h"

class UAnimationAsset;
class UBlendSpaceBase;
class UCurveFloat;

USTRUCT(BlueprintType)
struct SIFU_API FWeaponAnimInfo : public FAssociatedPropsAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponAnimType m_eWeaponAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_weaponAnimAssociated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* m_weaponBlendSpaceAssociated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FWeaponBlendSpaceParam> m_weaponBlendSpaceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_playRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponBlendSpaceComputeTime m_eBlendSpaceComputeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponOrientationConstraint m_eOrientationConstraint;
    
    FWeaponAnimInfo();
};

