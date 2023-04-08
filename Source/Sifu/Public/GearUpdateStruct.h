#pragma once
#include "CoreMinimal.h"
#include "ECharacterGender.h"
#include "EquipmentStruct.h"
#include "GearUpdateStruct.generated.h"

class UBaseWeaponData;

USTRUCT(BlueprintType)
struct FGearUpdateStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentStruct> m_Outfits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseWeaponData* m_weaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterGender m_eGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiSkinTone;
    
    SIFU_API FGearUpdateStruct();
};

