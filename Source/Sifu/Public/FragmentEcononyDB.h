#pragma once
#include "CoreMinimal.h"
#include "ELootBoxType.h"
#include "EEquipmentSlot.h"
#include "Engine/DataAsset.h"
#include "SlotEquipmentValues.h"
#include "EGearRarity.h"
#include "FragmentEcononyDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UFragmentEcononyDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EEquipmentSlot, FSlotEquipmentValues> m_SlotEquipmentsValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iPrestigePointValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ELootBoxType, int32> m_LootBoxesValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iApperacenChangeCost;
    
    UFragmentEcononyDB();
    UFUNCTION(BlueprintPure)
    int32 BPF_GetRepairCost(EEquipmentSlot _eSlot, EGearRarity _eRarity) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetFragmentValue(EEquipmentSlot _eSlot, bool _bIsDirty, EGearRarity _eRarity) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetDyeCost(EEquipmentSlot _eSlot, EGearRarity _eRarity) const;
    
};

