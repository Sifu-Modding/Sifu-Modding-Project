#pragma once
#include "CoreMinimal.h"
#include "EInputMappingCompatibilityRuleType.h"
#include "InputMappingCompatibilityRule.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct SIFU_API FInputMappingCompatibilityRule {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputMappingCompatibilityRuleType m_eRule;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGenericInputData>> m_Classes;
    
    FInputMappingCompatibilityRule();
};

