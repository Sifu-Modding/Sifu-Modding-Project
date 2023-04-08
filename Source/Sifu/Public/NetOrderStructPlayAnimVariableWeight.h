#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "ELookAtApplyMode.h"
#include "SCUserDefinedEnumHandler.h"
#include "NetOrderStruct.h"
#include "NetOrderStructPlayAnimVariableWeight.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructPlayAnimVariableWeight : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_AnimContainerToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_VariableWeightLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookAtApplyMode m_eLookAtApplyMode;
    
    SIFU_API FNetOrderStructPlayAnimVariableWeight();
};

