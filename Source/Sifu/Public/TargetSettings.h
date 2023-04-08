#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETargetingPrio.h"
#include "TargetEvaluationSettings.h"
#include "TargetSettings.generated.h"

class UEvaluateTargetCondition;

USTRUCT(BlueprintType)
struct SIFU_API FTargetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEvaluateTargetCondition*> m_Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTargetEvaluationSettings> m_Evaluations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_DebugConsoleVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetingPrio m_eDebugConsoleVariableMinTargettingPrio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_DebugActionColor;
    
    FTargetSettings();
};

