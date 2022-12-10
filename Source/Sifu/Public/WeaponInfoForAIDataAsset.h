#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "UsableWeaponInfo.h"
#include "WeaponInfoForAIDataAsset.generated.h"

class ABaseWeapon;
class UBaseWeaponData;

UCLASS()
class SIFU_API UWeaponInfoForAIDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<TSubclassOf<ABaseWeapon>, TSubclassOf<UBaseWeaponData>> m_WeaponsInfo;
    
    UPROPERTY(EditAnywhere)
    TMap<TSubclassOf<ABaseWeapon>, FUsableWeaponInfo> m_WeaponsGameplayInfo;
    
    UWeaponInfoForAIDataAsset();
};

