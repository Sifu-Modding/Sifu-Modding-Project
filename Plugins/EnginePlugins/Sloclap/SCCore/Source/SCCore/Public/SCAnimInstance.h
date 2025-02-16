#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DynamicBlendSettings.h"
#include "ECinematicLayerTypes.h"
#include "ESCBlendType.h"
#include "SCAnimInstanceBase.h"
#include "SCAnimInstance.generated.h"

class UCurveFloat;
class UMirrorAnimDB;
class UPoseAsset;

UCLASS(Blueprintable, NonTransient)
class SCCORE_API USCAnimInstance : public USCAnimInstanceBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateDelegate, float, _fDt);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float m_fCinematicOverallWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCinematicLayerTypesCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPreviewCinematicLayerTypesCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirrorAnimDB* m_MirrorAnimDB;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPoseAsset* m_CachedCurrentPoseAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIsInCinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDynamicBlendSettings m_LocoToActionBlendForRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDynamicBlendSettings m_ActionToActionBlendForRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDynamicBlendSettings m_ActionToLocoBlendForRep;
    
public:
    USCAnimInstance();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSavedTransform(FName _savedBone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInPreview() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPoseAsset* BPF_GetCurrentPoseAsset() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_BlendCinematicLayer(ECinematicLayerTypes _eLayerToBlendOut, float _fTargettedValue, float _fDuration, ESCBlendType _eBlendType, UCurveFloat* _blendCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UpdateForVLog();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UpdateAnimationInPreview(float _fDt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCinematicBlendOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCinematicBlendedOut();
    
};

