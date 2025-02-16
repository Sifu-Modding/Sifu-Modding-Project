#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionIsAttacking.generated.h"

class UAttackDB;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionIsAttacking : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackDB* m_AttackToTest;
    
    UComboAIConditionIsAttacking();

};

