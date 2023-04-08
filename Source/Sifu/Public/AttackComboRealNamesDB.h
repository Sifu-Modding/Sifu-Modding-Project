#pragma once
#include "CoreMinimal.h"
#include "AlternativeAttackComboRealNamesDB.h"
#include "MainAttackComboRealNamesDB.h"
#include "AttackComboRealNamesDB.generated.h"

USTRUCT(BlueprintType)
struct FAttackComboRealNamesDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMainAttackComboRealNamesDB m_MainAttacksComboNamesDB[2];
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FAlternativeAttackComboRealNamesDB m_AlternativeAttacksComboNamesDB[5];
    
    SIFU_API FAttackComboRealNamesDB();
};

