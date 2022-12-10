#pragma once
#include "CoreMinimal.h"
#include "SCCharacterImpostor.h"
#include "ESCSignificanceBuckets.h"
//#include "AkExternalSourceInfo.h"
#include "BaseCharacterImpostor.generated.h"

class UAkRtpc;
class UAkAudioEvent;
class UCurveFloat;

UCLASS()
class SIFU_API ABaseCharacterImpostor : public ASCCharacterImpostor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    ESCSignificanceBuckets m_eMoanMinBucket;
    
    //UPROPERTY(EditDefaultsOnly)
    //UAkAudioEvent* m_MoanEvent;
    //
    //UPROPERTY(EditDefaultsOnly)
    //TArray<FAkExternalSourceInfo> m_MoanExternalSourceInfos;
    
   /* UPROPERTY(EditDefaultsOnly)
    UAkRtpc* m_MoanIntensityRTPC;*/
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MoanIntensityRTPCName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoanInterpolationInMs;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AngleFromCameraForwardRemappingCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MoanRefBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoanIntensityThresold;
    
public:
    ABaseCharacterImpostor();
};

