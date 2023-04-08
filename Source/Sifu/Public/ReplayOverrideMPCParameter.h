#pragma once
#include "CoreMinimal.h"
#include "ReplayOverrideMPCParameter.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FReplayOverrideMPCParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_MPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fValue;
    
    SIFU_API FReplayOverrideMPCParameter();
};

