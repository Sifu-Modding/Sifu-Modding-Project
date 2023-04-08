#pragma once
#include "CoreMinimal.h"
#include "BlendProfilePayload.h"
#include "BlendProfileBySpeedStateStruct.h"
#include "BlendProfileBySpeedStatePayload.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UBlendProfileBySpeedStatePayload : public UBlendProfilePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendProfileBySpeedStateStruct m_BlendProfiles;
    
    UBlendProfileBySpeedStatePayload();
};

