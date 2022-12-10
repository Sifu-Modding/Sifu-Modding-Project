#pragma once
#include "CoreMinimal.h"
#include "SCAttributeSet.h"
#include "AttributeSet.h"
#include "CharacterStatAttributeSet.generated.h"

UCLASS(BlueprintType)
class SIFU_API UCharacterStatAttributeSet : public USCAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData MaxHealth;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData MaxStructure;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData FocusPoints;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData SkillPoints;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData Level;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData Experience;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Age)
    FGameplayAttributeData Age;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DeathCounter)
    FGameplayAttributeData DeathCounter;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData PendantCharges;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData PendantChargesRefill;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData PendantChargesLimit;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData XPMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData DemoTrials;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData CurrentComboKills;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData MaxComboKills;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData CurrentComboXp;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData MaxComboXp;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData Score;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData DeathCounterMax;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData GameDifficulty;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData CheatsUnlockPoints;
    
    UCharacterStatAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_DeathCounter();
    
    UFUNCTION()
    void OnRep_Age();
    
};

