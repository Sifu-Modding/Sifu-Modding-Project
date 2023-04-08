#pragma once
#include "CoreMinimal.h"
#include "VariableWeightLayerToBoneMask.h"
#include "VariableWeightInfo.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FVariableWeightInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariableWeightLayerToBoneMask> m_layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVariableWeightLayerToBoneMask> m_pendingDelete;
    
    FVariableWeightInfo();
};

