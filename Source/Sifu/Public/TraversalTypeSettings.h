#pragma once
#include "CoreMinimal.h"
#include "TraversalTypeSettings.generated.h"

USTRUCT(BlueprintType)
struct FTraversalTypeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEntryAngleAllowance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fExitAngleClampValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinTraversalDist;
    
    SIFU_API FTraversalTypeSettings();
};

