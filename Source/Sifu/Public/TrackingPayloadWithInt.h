#pragma once
#include "CoreMinimal.h"
#include "TrackingPayloadWithInt.generated.h"

USTRUCT(BlueprintType)
struct FTrackingPayloadWithInt {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_Int;
    
    SIFU_API FTrackingPayloadWithInt();
};

