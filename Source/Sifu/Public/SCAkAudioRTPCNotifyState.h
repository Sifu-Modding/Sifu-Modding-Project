#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "SCAkAudioRTPCNotifyState.generated.h"

//class UAkRtpc;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API USCAkAudioRTPCNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
private:
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // UAkRtpc* m_RTCPObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fValueAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fValueAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCallRTPCOnSelf;
    
public:
    USCAkAudioRTPCNotifyState();

};

