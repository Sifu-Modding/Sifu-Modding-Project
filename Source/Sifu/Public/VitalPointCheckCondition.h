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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_attackerRequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_defenderRequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_defenderForbiddenTags;
    
public:
    UVitalPointCheckCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool BPE_CanActivate(const AFightingCharacter* _attacker, const AFightingCharacter* _defender) const;
    
};

