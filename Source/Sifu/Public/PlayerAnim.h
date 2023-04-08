#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/PoseSnapshot.h"
#include "AnimContainer.h"
#include "SCAnimInstance.h"
#include "SCUserDefinedEnumHandler.h"
#include "AddVariableWeightInfo.h"
#include "AnimQuadrantStruct.h"
#include "AnimStruct4.h"
#include "AnimStructAttack.h"
#include "AnimStructBase.h"
#include "AnimStructEmote.h"
#include "AnimStructHandPose.h"
#include "AnimStructMoveTransition.h"
#include "AnimStructOverride.h"
#include "AnimStructTraversal.h"
#include "AnimStructVariableWeight.h"
#include "BlendSpaceContainer.h"
#include "BlendSpaceDirectionContainer.h"
#include "BlendSpaceStructBase.h"
#include "EFallLevel.h"
#include "EGlobalBehaviors.h"
#include "ELimbs.h"
#include "EMoveDirections.h"
#include "EMoveStatus.h"
#include "EMoveTransitionType.h"
#include "EOrderType.h"
#include "EQuadrantTypes.h"
#include "ESaveBone.h"
#include "ESpeedState.h"
#include "ETransitionGlobalType.h"
#include "LocomotionTransitionsResultCache.h"
#include "LookAtAnimHandler.h"
#include "MoveStatus.h"
#include "MovementMode.h"
#include "OverridenVariableWeightInfo.h"
#include "SetVariableWeightInfo.h"
#include "SpeedDescriptionStruct.h"
#include "SpeedState.h"
#include "PlayerAnim.generated.h"

class UAnimSequence;
class UBaseMovementDB;
class UCurveFloat;
class UCurveVector;
class UHandPoseDB;

UCLASS(Blueprintable, NonTransient)
class SIFU_API UPlayerAnim : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<float> m_StateWeightArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<float> m_VariableWeightLayerWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructMoveTransition m_StartAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructMoveTransition m_StopAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructMoveTransition m_UTurnAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructMoveTransition m_LandingAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructMoveTransition m_TurnInPlaceAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eAnimQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveV1V2ThresholdSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructAttack m_AttackStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimQuadrantStruct m_QuadrantStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimContainer m_IdleAnimContainerFL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimContainer m_IdleAnimContainerFR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimContainer m_IdleAnimContainerBR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimContainer m_IdleAnimContainerBL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerFL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerFR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerBR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerBL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendSpaceDirectionContainer m_LockMoveBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendSpaceDirectionContainer m_LockMoveUpperBodyBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimStructBase m_DodgeStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimStructOverride m_V0OverrideStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> m_GuardAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bGuardMirrorFrontRightBackLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> m_GuardAnimWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> m_GuardPrepAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> m_GuardPrepAnimWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bGuardInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_fGuardPrepRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimStruct4 m_PlayAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EOrderType m_ePlayAnimOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 m_uiPlayAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimStructVariableWeight m_WeaponActionAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_LastActionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLastActionAnimInMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLastActionAnimCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLastActionAnimIdealCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimStructHandPose m_HandPoseAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHandPoseDB* m_HandPoseDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimStructEmote m_EmoteAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector m_vOwnerVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fOwnerVelocityLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fOwnerVelocityMaxForV0Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fOwnerVelocityMaxForV1Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fOwnerVelocityMaxForV2Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIsBlendSpaceAngleValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fBlendSpaceAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fBlendspaceAngleMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSpeedDescriptionStruct m_LockMoveSpeedDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSpeedDescriptionStruct m_FreeMoveV1SpeedDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSpeedDescriptionStruct m_FreeMoveV2SpeedDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSpeedDescriptionStruct m_FreeMoveV3SpeedDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralLeanDeactivationDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralLeanDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralLeanRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralLeanMaxAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ProceduralLeanLerpTarget[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator m_ProceduralLeanAngleRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovementMode, meta=(AllowPrivateAccess=true))
    FMovementMode m_MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bCheatFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFallLevel m_eFallLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FBlendSpaceStructBase m_PlayBlendSpaceStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimStructVariableWeight m_FidgetAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimStructVariableWeight m_WeaponIdleAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_WeaponIdleVariableWeightLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimStructVariableWeight m_OpeningDoorAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimContainer m_PickUpAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_PickUpAnimVariableWeightLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimContainer m_DropWeaponAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_DropWeaponAnimVariableWeightLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimContainer m_HandSwapWeaponAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_HandSwapWeaponAnimVariableWeightLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TraversalIKAnimInstanceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bProceduralLandingActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCascadeIsInSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCascadeIsLethal;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRagdollInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RagdollInProgressSnapshotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fWantedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimContainer m_optimizationFrameAnimContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimContainer m_FreeMoveAnimContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimContainer m_FreeMoveMirroredAnimContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FBlendSpaceDirectionContainer m_FreeMoveBlendSpaceV1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FBlendSpaceDirectionContainer m_FreeMoveBlendSpaceV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FBlendSpaceDirectionContainer m_FreeMoveBlendSpaceV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLookAtAnimHandler m_LookAtAnimHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEyesLookAtEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLookAtEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverridePoseWithSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot m_PoseSnapshotOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPoseSnapshotOverrideBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAnimStructTraversal m_TraversalAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eForcedQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpine1AlphaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpine2AlphaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpine3AlphaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fSpine1Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fSpine2Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fSpine3Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fSpineModifsWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector m_vProceduralShakePelvisOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fProceduralShakePelvisWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fProceduralLandingPelvisHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bFallInProgress1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bFallInProgress2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fProceduralLandingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMoveDirections m_eVerticalMovementDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMoveDirections m_eHorizontalMovementDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseUpperBodySyncLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fHandPoseBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bHandPoseBlendWeightIsNullOrNegative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoveStatus, meta=(AllowPrivateAccess=true))
    FMoveStatus m_MoveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpeedState, meta=(AllowPrivateAccess=true))
    FSpeedState m_SpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bOptimizationFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseMovementDB* m_BaseMovementDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bCarryAnimatedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bCarryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_fSpeedStateAlphaV0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_fSpeedStateAlphaV1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_fSpeedStateAlphaV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_fSpeedStateAlphaV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_fBodyPartDesynchronizationWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionTransitionsResultCache m_LocomotionTransitionsCache;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpineModifWeaponBlendDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_ProceduralShakeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralShakePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralShakeStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ProceduralLandingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralLandingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralLandingBlendOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralMediumLandingAmplitudeCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralMediumLandingDurationCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AnimLayerByStunCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaSpine1MaxNoDrunken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaSpine2MaxNoDrunken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaSpine3MaxNoDrunken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBlendSwitchWeaponFamilyDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VariableWeightAlphaByLayers, meta=(AllowPrivateAccess=true))
    TArray<FAddVariableWeightInfo> m_VariableWeightAlphaByLayersReplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoveVariableWeightAlphaByLayers, meta=(AllowPrivateAccess=true))
    TArray<FName> m_RemoveVariableWeightAlphaByLayersReplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetVariableWeightAlphaByLayers, meta=(AllowPrivateAccess=true))
    TArray<FSetVariableWeightInfo> m_SetVariableWeightAlphaByLayersReplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OverridenAlpha, meta=(AllowPrivateAccess=true))
    TArray<FOverridenVariableWeightInfo> m_VariableWeightOverridenAlphaByLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVariableWeightIntoBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVariableWeightOutOfBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> m_SetOfStateToIgnoreInVariableWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VariableWeightMasterStateName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PlayAnimSubAnimInstanceTags[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttackSubAnimInstanceTags[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LookAtSubAnimInstanceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeedInterpolationForSpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_LayerEnumForVariableWeight;
    
public:
    UPlayerAnim();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_VariableWeightAlphaByLayers();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpeedState();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SetVariableWeightAlphaByLayers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoveVariableWeightAlphaByLayers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OverridenAlpha();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MoveStatus();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementMode();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGlobalBehaviorChanged(EGlobalBehaviors _eBehavior, const bool _bFromDialog);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUTurnV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUTurnV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUTurnV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUTurnType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTurnInPlaceType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStrafeV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStrafeV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStrafeType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStopV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStopV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStopV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStopType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStartV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStartV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStartV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStartType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOrientedStartV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOrientedStartV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOrientedStartV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNorthStartV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNorthStartV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNorthStartV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNorthStartType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLandingType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMoveTransitionType GetUTurnTypeFromAnimState(EMoveTransitionType _eCurrentTurnType, uint8 _uiAnimState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESpeedState GetTransitionSpeedState(EMoveTransitionType _enumValue, bool _bSafe);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETransitionGlobalType GetTransitionGlobalType(EMoveTransitionType _eTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTrackingPosition(ELimbs _eLimbs, int32 _iAttackStateID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStateWeight(int32 _iStateID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSavedTransformFromSaveBone(ESaveBone _eSaveBone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSaveBoneAsName(ESaveBone _eSaveBone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMoveTransitionType GetLastUTurnTransitionType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMoveTransitionType GetLastStartTransitionType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHitTargetPosition(ELimbs _eLimbs, int32 _iAttackStateID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimIKAlpha(ELimbs _eLimbs, int32 _iAttackStateID);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetVariableWeightBlendDurationOverride(const FSCUserDefinedEnumHandler& _userEnum, bool _bBlendOut, bool _bOverride, float _fOverrideDuration);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSpineAlphaMax(float _fSpine1Alpha, float _fSpine2Alpha, float _fSpine3Alpha);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSpeedState(ESpeedState _eSpeedState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMoveStatus(EMoveStatus _eMoveStatus);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetVariableWeightInfo();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveVariableWeightActivation(const FSCUserDefinedEnumHandler& _userEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsIntransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetVariableWeightMirrorCoeff(const FSCUserDefinedEnumHandler& _userEnum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetVariableWeightAlpha(const FSCUserDefinedEnumHandler& _userEnum) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddVariableWeightActivation(const FSCUserDefinedEnumHandler& _userEnum, bool _bMirror);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMoveStatusChanged();
    
};

