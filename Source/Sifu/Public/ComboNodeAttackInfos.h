#pragma once
#include "CoreMinimal.h"
#include "ChargedAttackNameByQuadrants.h"
#include "ChargedBuildUpStructByQuadrant.h"
#include "ComboNodeAttackInfos.generated.h"

USTRUCT(BlueprintType)
struct FComboNodeAttackInfos {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName m_Attacks[4];
    
    UPROPERTY(VisibleAnywhere)
    TArray<FChargedAttackNameByQuadrants> m_ChargedAttacks;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FChargedBuildUpStructByQuadrant> m_BuildUpForChargedAttack;
    
    SIFU_API FComboNodeAttackInfos();
};

