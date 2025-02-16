#pragma once
#include "CoreMinimal.h"
#include "SCPlayerVolume.h"
#include "SoundTensionThreat.h"
#include "SoundTensionVolume.generated.h"

UCLASS(Blueprintable)
class SIFU_API ASoundTensionVolume : public ASCPlayerVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTensionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundTensionThreat m_Threat;
    
public:
    ASoundTensionVolume(const FObjectInitializer& ObjectInitializer);

};

