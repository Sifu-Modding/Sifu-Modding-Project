#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AnimContainer.h"
#include "Bool.h"
#include "ESCBlendType.h"
#include "InheritedDataAsset.h"
#include "CardinalSpeed.h"
#include "ESpeedState.h"
#include "LockMoveAnimQuadrant.h"
#include "LocomotionRotationParams.h"
#include "SpeedStateBlendTo.h"
#include "Templates/SubclassOf.h"
#include "reeMoveAnimQuadrant.h"
#include "BaseMovementDB.generated.h"

class UCurveFloat;
class UDetailedMoveTransitionDB;
class UDodgeDB;
class USpeedPivotFootData;
class UTransitionAnimRequest;

UCLASS(Blueprintable)
class SIFU_API UBaseMovementDB : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDetailedMoveTransitionDB* m_DetailedMoveTransitionDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTransitionAnimRequest> m_TransitionAnimRequest;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeedStateBlendTo m_BlendDescription[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRushMoveAnimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRushMoveOverallStretchFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRushMoveMaxAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRushMoveTransitionMaxAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRushStaminaConsumptionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_RushStaminaConsumptionOverWeightRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRushCooldownBurnAllStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWantToRushInLockMoveTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSwitchToExploOnLongRush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRushDurationToExplo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAuthorizeMirroring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimContainer> m_AlertedAIIdlesAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimContainer> m_BaseAIIdlesAnims;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_FreeMoveAnim[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FreeMoveAnimQuadrant m_FreeMoveAnimQuadrant[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_FreeMoveAnimWeapon[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FreeMoveAnimQuadrant m_FreeMoveAnimWeaponQuadrant[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardinalSpeed m_LockMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLockMoveOverallStretchFactor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardinalSpeed m_FreeMoveSpeeds[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveV1AnimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveV1OverallStretchFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveV2AnimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveV2OverallStretchFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveMaxAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveTransitionMaxAngularSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBool m_bCamOverTheShoulder[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiLookAtLockMoveTargetAllowedPerAlertLevelMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockMoveAnimQuadrant m_LockMoveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockMoveAnimQuadrant m_LockMoveAnimWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAnimNorthSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAnimSouthSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAnimEastSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAnimWestSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLockMoveMaxAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLockMoveTransitionMaxAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fV3LandingVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fV2LandingVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fV1LandingVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fV3ActionToLocomotionSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fV2ActionToLocomotionSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fV1ActionToLocomotionSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fActionToLocomotionBlendDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCBlendType m_eActionToLocomotionBlendType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WeightCategoryMobilityRatios[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WeightCategoryMobilityRatiosLockMove[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverweightImpactFreemoveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_LockMoveVelocityLerpCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_FreeMoveVelocityLerpCurves[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionRotationParams m_LockMoveRotationParams[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionRotationParams m_FreeMoveRotationParams[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_AccumulationRotationDelayTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_RotationSpeedMultiplierByTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxStrafeDeltaAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStartInterruptFirstStepRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFreeMoveEnableAnimTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFreeMoveEnablePivotFoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLockMoveEnableAnimTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLockMoveEnablePivotFoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableInputStabilisationOnMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableSpeedBlender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxCoeffToUsePreviousSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxCoeffOrderedToUsePreviousSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiForceKeepForwardOnStartsByMoveStatus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USpeedPivotFootData* m_FreeMovePivotFootParams[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpeedPivotFootData* m_LockMovePivotFootParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDodgeDB* m_DodgeDB;
    
    UBaseMovementDB();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFreeMoveSpeed(const FVector& _vLocalDir, const float _fGlobalIntensity, const ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFreeMoveOverallAnimSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFreeMoveAnimSpeed(ESpeedState _eSpeedState) const;
    
};

