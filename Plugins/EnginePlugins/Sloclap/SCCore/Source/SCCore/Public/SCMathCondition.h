#pragma once
#include "CoreMinimal.h"
#include "ESCMathCondition.h"
#include "ESCMathConditionValueType.h"
#include "SCMathCondition.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCMathCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCMathConditionValueType m_eValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iComparedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fComparedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCMathCondition m_eCondition;
    
    FSCMathCondition();
};

