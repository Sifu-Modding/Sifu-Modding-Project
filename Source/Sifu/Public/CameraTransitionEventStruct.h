#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CameraTransitionEventStruct.generated.h"

class UCameraTransitionEvent;

USTRUCT(BlueprintType)
struct SIFU_API FCameraTransitionEventStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraTransitionEvent> m_Event;
    
    FCameraTransitionEventStruct();
};

