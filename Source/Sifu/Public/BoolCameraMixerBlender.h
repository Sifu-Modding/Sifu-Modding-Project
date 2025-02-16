#pragma once
#include "CoreMinimal.h"
#include "ESCBlendType.h"
#include "OverTimeCameraMixerBlender.h"
#include "BoolCameraMixerBlender.generated.h"

class UCameraComponentThird;
class UCurveFloat;

UCLASS(Abstract, Blueprintable)
class SIFU_API UBoolCameraMixerBlender : public UOverTimeCameraMixerBlender {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCBlendType m_eBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_Curve;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bConstantSpeed;
    
public:
    UBoolCameraMixerBlender();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOldValue() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_GetBool(UCameraComponentThird* _camera, bool _bNoDamping) const;
    
};

