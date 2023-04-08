#pragma once
#include "CoreMinimal.h"
#include "EComboTransition.h"
#include "ComboTransition.generated.h"

class UComboTransitionCondition;

USTRUCT(BlueprintType)
struct FComboTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComboTransition m_eInputTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComboTransitionCondition* m_ConditionInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, int32> m_TargetNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProbability;
    
    SIFU_API FComboTransition();
};

