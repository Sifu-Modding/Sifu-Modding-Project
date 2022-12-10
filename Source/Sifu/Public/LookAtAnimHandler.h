#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AimOffsetStruct.h"
#include "UObject/NoExportTypes.h"
#include "ELookAtApplyMode.h"
#include "ELookAtRefDirMode.h"
#include "LookAtModifierParams.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LookAtConfig.h"
#include "ELookAtTargetType.h"
#include "LookAtLocomotionLimits.h"
#include "LookAtLimits.h"
#include "ETransitionGlobalType.h"
#include "LookAtAnimHandler.generated.h"

class ULookAtAnimRequest2;

USTRUCT(BlueprintType)
struct SIFU_API FLookAtAnimHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, NotReplicated)
    FAimOffsetStruct m_aimOffset0;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, NotReplicated)
    FAimOffsetStruct m_aimOffset1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 m_iAimOffsetIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bLookAtEnabled;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    FVector2D m_vRawBlendSpaceParams;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector2D m_vBlendSpaceParams;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    FVector2D m_vEyeBlendSpaceParams;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator m_BoneModifierRot;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator m_CompensationRot;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bIsTargetLocationValid;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    FVector m_vTargetLocation;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    bool m_bEnableAnimationCompensation;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    float m_fMaxHeadDiffYaw;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    float m_fMaxHeadDiffPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, NotReplicated)
    FName m_headInWorldSpaceSaveBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, NotReplicated)
    FName m_headComparaisonInWorldSpaceSaveBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, NotReplicated)
    FName m_headInWorldSpacePostLookAtSaveBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, NotReplicated)
    bool m_bEyesLookAtSpecificBone;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, NotReplicated)
    FName m_EyesLookAtSpecificBoneName;
    
    UPROPERTY(BlueprintReadOnly)
    ELookAtApplyMode m_eApplyMode;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated)
    ELookAtRefDirMode m_eRefDirMode;
    
private:
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    float m_fAngleThreshold;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    float m_fMaxFrontAngle;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    bool m_bLookInCameraDir;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    TSubclassOf<ULookAtAnimRequest2> m_animRequest;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    FLookAtConfig m_lookAtConfigs[5];
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    TArray<ELookAtTargetType> m_targetPriorities;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    FLookAtModifierParams m_defaultModifierParams;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    FLookAtLimits m_boneModifierLimits;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    bool m_bInverseValuesOnBoneModifier;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    FVector2D m_vBoneModifierOffset;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    FVector2D m_vBoneModifierMultiplier;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    FLookAtLimits m_defaultLimits;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    TArray<FLookAtLocomotionLimits> m_locomotionLimits;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    TMap<ETransitionGlobalType, FLookAtLimits> m_transitionLimits;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    FLookAtModifierParams m_friendlyModifierParams;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    FLookAtModifierParams m_hostileInIdleModifierParams;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    uint32 m_uiFirstLocalPlayerAIBehavior;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    float m_fMaxDistFromFirstLocalPlayer;
    
public:
    FLookAtAnimHandler();
};

