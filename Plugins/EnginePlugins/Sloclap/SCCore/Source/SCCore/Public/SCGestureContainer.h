#pragma once
#include "CoreMinimal.h"
#include "SCGestureAndBlendProfile.h"
#include "SCGestureContainer.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCGestureContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCGestureAndBlendProfile> m_aGesturesAnimContainer;
    
    FSCGestureContainer();
};

