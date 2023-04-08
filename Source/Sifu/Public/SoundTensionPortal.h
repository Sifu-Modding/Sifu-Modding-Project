#pragma once
#include "CoreMinimal.h"
#include "SoundTensionVolume.h"
#include "SoundTensionPortal.generated.h"

UCLASS(Blueprintable)
class SIFU_API ASoundTensionPortal : public ASoundTensionVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTensionLevelBackward;
    
public:
    ASoundTensionPortal();
};

