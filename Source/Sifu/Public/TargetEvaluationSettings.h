#pragma once
#include "CoreMinimal.h"
#include "TargetEvaluationDBInstance.h"
#include "TargetEvaluationSettings.generated.h"

USTRUCT(BlueprintType)
struct FTargetEvaluationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetEvaluationDBInstance m_TargetEvaluationInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMute;
    
    SIFU_API FTargetEvaluationSettings();
};

