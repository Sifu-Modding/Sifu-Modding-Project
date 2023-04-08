#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "AIActionWait.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIActionWait : public UWGAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDuration;
    
    UAIActionWait();
};

