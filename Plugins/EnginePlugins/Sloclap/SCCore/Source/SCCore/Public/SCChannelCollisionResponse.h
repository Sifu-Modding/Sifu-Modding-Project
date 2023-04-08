#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SCChannelCollisionResponse.generated.h"

USTRUCT(BlueprintType)
struct FSCChannelCollisionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> m_eChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionResponse> m_eCollisionResponse;
    
    SCCORE_API FSCChannelCollisionResponse();
};

