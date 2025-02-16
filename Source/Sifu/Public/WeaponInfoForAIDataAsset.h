#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "UsableWeaponInfo.h"
#include "WeaponInfoForAIDataAsset.generated.h"

class ABaseWeapon;
class UBaseWeaponData;

UCLASS(Blueprintable)
class SIFU_API UWeaponInfoForAIDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABaseWeapon>, TSubclassOf<UBaseWeaponData>> m_WeaponsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABaseWeapon>, FUsableWeaponInfo> m_WeaponsGameplayInfo;
    
    UWeaponInfoForAIDataAsset();

};

