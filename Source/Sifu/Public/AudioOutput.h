#pragma once
#include "CoreMinimal.h"
//#include "AkChannelConfiguration.h"
#include "AudioOutput.generated.h"

USTRUCT(BlueprintType)
struct FAudioOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_DisplayText;
    
  /*  UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkChannelConfiguration m_eChannelConfig;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUse3DOutput;
    
    SIFU_API FAudioOutput();
};

