#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SCChannelCollisionResponse.h"
#include "SCCollisionResponseBuilder.generated.h"

USTRUCT(BlueprintType)
struct FSCCollisionResponseBuilder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionResponse> m_eDefaultCollisionResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCChannelCollisionResponse> m_eChannelResponses;
    
    SCCORE_API FSCCollisionResponseBuilder();
};

