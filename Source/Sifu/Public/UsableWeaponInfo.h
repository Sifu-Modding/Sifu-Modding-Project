#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UsableWeaponInfo.generated.h"

class ABaseWeapon;
class UBaseWeaponData;
class UWeaponGameplayData;

USTRUCT(BlueprintType)
struct FUsableWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWeaponGameplayData> m_weaponGameplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABaseWeapon>, TSubclassOf<UBaseWeaponData>> m_WeaponAnimInfos;
    
    SIFU_API FUsableWeaponInfo();
};

