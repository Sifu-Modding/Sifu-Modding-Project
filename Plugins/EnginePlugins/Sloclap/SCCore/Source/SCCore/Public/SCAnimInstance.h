#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SCAnimInstanceBase.h"
#include "DynamicBlendSettings.h"
#include "ECinematicLayerTypes.h"
#include "ESCBlendType.h"
#include "SCAnimInstance.generated.h"

class UMirrorAnimDB;
class UPoseAsset;
class UCurveFloat;

UCLASS(NonTransient)
class SCCORE_API USCAnimInstance : public USCAnimInstanceBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateDelegate, float, _fDt);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float m_fCinematicOverallWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fCinematicLayerTypesCursor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fPreviewCinematicLayerTypesCursor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMirrorAnimDB* m_MirrorAnimDB;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UPoseAsset* m_CachedCurrentPoseAsset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bIsInCinematic;
    
    UPROPERTY(Replicated, Transient)
    FDynamicBlendSettings m_LocoToActionBlendForRep;
    
    UPROPERTY(Replicated, Transient)
    FDynamicBlendSettings m_ActionToActionBlendForRep;
    
    UPROPERTY(Replicated, Transient)
    FDynamicBlendSettings m_ActionToLocoBlendForRep;
    
public:
    USCAnimInstance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    FTransform GetSavedTransform(FName _savedBone) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsInPreview() const;
    
    UFUNCTION(BlueprintPure)
    UPoseAsset* BPF_GetCurrentPoseAsset() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_BlendCinematicLayer(ECinematicLayerTypes _eLayerToBlendOut, float _fTargettedValue, float _fDuration, ESCBlendType _eBlendType, UCurveFloat* _blendCurve);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_UpdateForVLog();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_UpdateAnimationInPreview(float _fDt);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCinematicBlendOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCinematicBlendedOut();
    
};

