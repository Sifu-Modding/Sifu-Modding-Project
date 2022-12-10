#pragma once
#include "CoreMinimal.h"
//#include "AkChannelConfiguration.h"
#include "AudioOutput.generated.h"

USTRUCT(BlueprintType)
struct FAudioOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_DisplayText;
    
   /* UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AkChannelConfiguration m_eChannelConfig;*/
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUse3DOutput;
    
    SIFU_API FAudioOutput();
};

