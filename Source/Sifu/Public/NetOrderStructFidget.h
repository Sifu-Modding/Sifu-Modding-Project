#pragma once
#include "CoreMinimal.h"
#include "BlendProfileBySpeedStateStruct.h"
#include "EFidgetMirroringTypes.h"
#include "NetOrderStructPlayAnimVariableWeight.h"
#include "NetOrderStructFidget.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructFidget : public FNetOrderStructPlayAnimVariableWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendProfileBySpeedStateStruct m_BlendProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFidgetMirroringTypes m_eMirrorHandling;
    
    SIFU_API FNetOrderStructFidget();
};

