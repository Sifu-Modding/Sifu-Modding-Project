#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AIAttackHitDetectionVolume.h"
#include "AIDominationGaugeSteps.h"
#include "EAIChangeToIndirectRoleStates.h"
#include "EAIGameplayStates.h"
#include "EAIPositioningOption.h"
#include "EAIWuguanTicketEvaluation.h"
#include "EDefenseTactics.h"
#include "EOrderType.h"
#include "ESCAICombatRoles.h"
#include "ESpeedState.h"
#include "EditableOrderType.h"
#include "NavAreaPerRange.h"
#include "Templates/SubclassOf.h"
#include "TimerAndOffset.h"
#include "GlobalAISettings.generated.h"

class AAIDirectorActor;
class UAIMasterArchetype;
class UCurveFloat;
class UDodgeTypeUseCaseMatrix;
class UNavArea;
class UNavigationQueryFilter;
class UTraversalDB;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=WuguanAI)
class SIFU_API UGlobalAISettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSerializeVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayBeforeInvestigation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOnPlayerDeathDifficultyRatio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDistToTriggerSuspicious;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInvestigationDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSightMaxVerticalAngle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFallSoundDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnemyUpdateDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayBetween2SurprisedDialogSegemnt;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_fSurprisedPlayRateRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxGlobalDifficultyValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIGameplayStates, float> m_RecordedStateDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDodgeTypeUseCaseMatrix> m_DodgeTypeUseCaseMatrixClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackPositionRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDirectOponentAttackPositionRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableJiggleWithMove;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableJiggleWithAnimation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fJiggleTolerance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fJiggleMinDist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditableOrderType> m_NoPhaseTransitionOrders;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eJiggleSpeedState;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TraceTargetCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TraceTargetCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTraceTargetForObstacleFrequency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> m_TraceTargetForObstacleChannel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionResponseContainer m_TraceTargetForObstacleCollision;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIAttackHitDetectionVolume m_AttackHitDetectionVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCapsuleRadiusToDetectFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxComboStreak;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAlwaysLogComboEvaluationStack;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCombatPositionPathCostLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAIPositioningOption> m_DefaultPositioningOptions;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AttackTicketJokerComboAttackCount[4];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpawningTimePerFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> m_TraversalNavArea;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavAreaPerRange> m_ClimbNavArea;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavAreaPerRange> m_DropDownNavAreas;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTraversalDB> m_TraversalDb;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTraversalLockTimer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsTraversalLockTimerUniversal;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDefaultNavLinkCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPatrolAcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTraversalZNavExtent;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStopPredictionRequiredDistance[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanSlowDownSpeedStateOnPathChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bStopLockOnEnemyIfFarFromEnemy;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDifficultyUpdateRate;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDominationGaugeSteps m_DominationGaugeStepsPerDifficulty[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DominationGaugeSteps[4];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxIndirectOponentPerDominationGauge[4];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTauntDifficultyBonus;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTauntTicketBehaviorMask;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCAICombatRoles, FTimerAndOffset> m_CombatRolesReactionTimes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIWuguanTicketEvaluation, float> m_fCombatRolesTestScoreFactors;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIChangeToIndirectRoleStates, float> m_fSwtichToIndirectOnStateTimers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EOrderType> m_ForbiddenOrdersForDirectOpponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCombatRolesRedistributionFallHeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCombatRoleRedistributionRushInitialDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCombatRoleRedistributionRushUpdateDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIWuguanTicketEvaluation, float> m_fSuspiciousTestScoreFactors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActivateCancelDamagesOnWeaponsForAI;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAIweaponDropImpulseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DefenseVsThrowableWindowFrameNb;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DefenseVsThrowableStartWindowAnticipationFrameNb;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDefenseTactics, float> m_DefenseTriggerWindowMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPrefightStructureBrokenLastChanceDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iAvoidWindowMultiHitDelayFramesOffset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iAvoidWindowEndMultiHitFramesOffset;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiThreateningActionsMask;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EOrderType> m_eThreateningAttackOrders;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFleeMinDist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTooCloseMaxDist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTriggerTooCloseOnlyDuringDialog;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTriggerTooCloseOnlyOnJoinDialogActors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIMasterArchetype> m_MasterArchetype;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTicketManagerMaxIterationTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTimeSliceTicketManagers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRunTicketManagerDuringSlate;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBehaviorChangedMaxRandomDelays[6];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFidgetNearDeathMaxRatio;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLastManBonusPerDomination[4];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> m_LastManBonusPerCharges;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> m_LastManBonusPerDeathCounter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range m_iLastManValueDeviation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNavigationQueryFilter> m_NothingQueryFilter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_fSanctuaryFirstBarkTriggerWindow;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_fSanctuaryFollowingBarkTriggerWindow;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAIDirectorActor> m_AIDirectorClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iArenaMaxAICharactersPerPool;
    
    UGlobalAISettings();
};

