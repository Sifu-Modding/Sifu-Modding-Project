#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamagedWeaponInfo.generated.h"

class UBaseWeaponData;
class USkeletalMesh;
class UWeaponGameplayData;

USTRUCT(BlueprintType)
struct FDamagedWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseWeaponData> m_WeaponDataToApplyOnBrokenWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWeaponGameplayData> m_WeaponGameplayDataToApplyOnBrokenWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamagedWeaponHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_StateSkeletalMesh;
    
    SIFU_API FDamagedWeaponInfo();
};

