#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SCChannelCollisionResponse.generated.h"

USTRUCT(BlueprintType)
struct FSCChannelCollisionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionResponse> m_eCollisionResponse;
    
    SCCORE_API FSCChannelCollisionResponse();
};

