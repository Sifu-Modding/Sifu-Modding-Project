#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "VitalPointCheckCondition.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UVitalPointCheckCondition : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_attackerRequiredTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_defenderRequiredTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_defenderForbiddenTags;
    
public:
    UVitalPointCheckCondition();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool BPE_CanActivate(const AFightingCharacter* _attacker, const AFightingCharacter* _defender) const;
    
};

