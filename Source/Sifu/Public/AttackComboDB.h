#pragma once
#include "CoreMinimal.h"
#include "AlternativeAttackComboDB.h"
#include "MainAttackComboDB.h"
#include "AttackComboDB.generated.h"

USTRUCT(BlueprintType)
struct FAttackComboDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMainAttackComboDB m_MainAttacksComboDB[2];
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FAlternativeAttackComboDB m_AlternativeAttacksComboDB[5];
    
    SIFU_API FAttackComboDB();
};

