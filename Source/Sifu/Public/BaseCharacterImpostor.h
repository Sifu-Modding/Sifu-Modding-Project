#pragma once
#include "CoreMinimal.h"
//#include "AkExternalSourceInfo.h"
#include "SCCharacterImpostor.h"
#include "ESCSignificanceBuckets.h"
#include "BaseCharacterImpostor.generated.h"

//class UAkAudioEvent;
class UAkRtpc;
class UCurveFloat;

UCLASS(Blueprintable)
class SIFU_API ABaseCharacterImpostor : public ASCCharacterImpostor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCSignificanceBuckets m_eMoanMinBucket;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // UAkAudioEvent* m_MoanEvent;
    
    /*UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAkExternalSourceInfo> m_MoanExternalSourceInfos;*/
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // UAkRtpc* m_MoanIntensityRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MoanIntensityRTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMoanInterpolationInMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AngleFromCameraForwardRemappingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MoanRefBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoanIntensityThresold;
    
public:
    ABaseCharacterImpostor(const FObjectInitializer& ObjectInitializer);

};

