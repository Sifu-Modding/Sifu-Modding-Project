#pragma once
#include "CoreMinimal.h"
#include "BoolCameraMixerBlender.h"
#include "BlackboardBoolCameraMixerBlender.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UBlackboardBoolCameraMixerBlender : public UBoolCameraMixerBlender {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_KeyName;
    
public:
    UBlackboardBoolCameraMixerBlender();
};

