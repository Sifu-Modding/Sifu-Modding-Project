#pragma once
#include "CoreMinimal.h"
#include "AlternativeAttackComboDB.generated.h"

USTRUCT(BlueprintType)
struct FAlternativeAttackComboDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_Attacks[4];
    
    SIFU_API FAlternativeAttackComboDB();
};

