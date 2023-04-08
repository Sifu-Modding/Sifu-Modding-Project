#pragma once
#include "CoreMinimal.h"
#include "BlendProfileBySpeedStateStruct.h"
#include "FidgetDBDescription.generated.h"

class UFidgetDB;

USTRUCT(BlueprintType)
struct FFidgetDBDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFidgetDB* m_FidgetDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFidgetDB* m_OnAlertLevelChangedFidgetDB;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiAllowedSpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendProfileBySpeedStateStruct m_BlendProfiles;
    
    SIFU_API FFidgetDBDescription();
};

