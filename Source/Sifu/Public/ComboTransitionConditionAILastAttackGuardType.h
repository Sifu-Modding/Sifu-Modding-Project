#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionCondition.h"
#include "ComboTransitionConditionAILastAttackGuardType.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboTransitionConditionAILastAttackGuardType : public UComboTransitionCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiGuardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDodged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAvoided;
    
public:
    UComboTransitionConditionAILastAttackGuardType();
};

