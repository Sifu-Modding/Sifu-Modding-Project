#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "ELookAtApplyMode.h"
#include "SCUserDefinedEnumHandler.h"
#include "AnimContainer.h"
#include "NetOrderStructPlayAnimVariableWeight.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructPlayAnimVariableWeight : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_AnimContainerToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_VariableWeightLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELookAtApplyMode m_eLookAtApplyMode;
    
    SIFU_API FNetOrderStructPlayAnimVariableWeight();
};

