#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "SCUserDefinedEnumHandler.h"
#include "IKProfileBlendInfos.h"
#include "SCAnimNotifyState.h"
#include "IKProfileAnimNotifyState.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UIKProfileAnimNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_Profile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_CrossFadeOutWithProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKProfileBlendInfos m_BoneLocationBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKProfileBlendInfos m_LimbRotationBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_ImpactTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference m_TargetBoneReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResetIKAlphaOnStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRotateImpactOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceBoneRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fForceBoneRotationBlendDuration;
    
    UIKProfileAnimNotifyState();
    
    // Fix for true pure virtual functions not being implemented
};

