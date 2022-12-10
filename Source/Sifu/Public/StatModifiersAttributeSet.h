#pragma once
#include "CoreMinimal.h"
#include "SCAttributeSet.h"
#include "AttributeSet.h"
#include "StatModifiersAttributeSet.generated.h"

UCLASS(BlueprintType)
class SIFU_API UStatModifiersAttributeSet : public USCAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData FocusGainMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData AvoidFocusGainBonus;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData DeflectFocusGainBonus;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData ParryImpactOnStructureBonus;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData ParryImpactOnWeaponBonus;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData StructureGainOnAvoidBonus;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData StructureImpactWithBluntBonus;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData WeaponHealthMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData WeaponDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData WeaponStructureImpactMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData BarehandsDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData BarehandsStructureImpactMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData TakedownHealthGainMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData DamageReceivedMultiplier;
    
    UStatModifiersAttributeSet();
};

