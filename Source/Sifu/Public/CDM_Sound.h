#pragma once
#include "CoreMinimal.h"
#include "CameraDataModifier.h"
#include "CDM_Sound.generated.h"

//class UAkAudioEvent;

UCLASS(Blueprintable)
class SIFU_API UCDM_Sound : public UCameraDataModifier {
    GENERATED_BODY()
public:
protected:
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // UAkAudioEvent* m_InAkEvent;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // UAkAudioEvent* m_OutAkEvent;
    
public:
    UCDM_Sound();

};

