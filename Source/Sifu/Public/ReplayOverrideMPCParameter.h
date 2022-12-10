#pragma once
#include "CoreMinimal.h"
#include "ReplayOverrideMPCParameter.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FReplayOverrideMPCParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* m_MPC;
    
    UPROPERTY(EditAnywhere)
    FName m_ParameterName;
    
    UPROPERTY(EditAnywhere)
    float m_fValue;
    
    SIFU_API FReplayOverrideMPCParameter();
};

