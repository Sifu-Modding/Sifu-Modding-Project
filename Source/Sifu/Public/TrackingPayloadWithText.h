#pragma once
#include "CoreMinimal.h"
#include "TrackingPayloadWithText.generated.h"

USTRUCT(BlueprintType)
struct FTrackingPayloadWithText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_Text;
    
    SIFU_API FTrackingPayloadWithText();
};

