#pragma once
#include "CoreMinimal.h"
#include "ChargedAttackNameByQuadrants.h"
#include "ChargedBuildUpStructByQuadrant.h"
#include "ComboNodeAttackInfos.generated.h"

USTRUCT(BlueprintType)
struct FComboNodeAttackInfos {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Attacks[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChargedAttackNameByQuadrants> m_ChargedAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChargedBuildUpStructByQuadrant> m_BuildUpForChargedAttack;
    
    SIFU_API FComboNodeAttackInfos();
};

