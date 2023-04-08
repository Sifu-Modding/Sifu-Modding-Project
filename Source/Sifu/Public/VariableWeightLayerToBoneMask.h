#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "VariableWeightLayerToBoneMask.generated.h"

class UBlendProfile;

USTRUCT(BlueprintType)
struct SIFU_API FVariableWeightLayerToBoneMask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_LayerEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendProfile* m_BoneMask;
    
    FVariableWeightLayerToBoneMask();
};

