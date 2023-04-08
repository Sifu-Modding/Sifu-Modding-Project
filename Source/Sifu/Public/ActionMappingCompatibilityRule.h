#pragma once
#include "CoreMinimal.h"
#include "EInputMappingCompatibilityRuleType.h"
#include "InputAction.h"
#include "ActionMappingCompatibilityRule.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FActionMappingCompatibilityRule {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputMappingCompatibilityRuleType m_eRule;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<InputAction> m_Actions;
    
    FActionMappingCompatibilityRule();
};

