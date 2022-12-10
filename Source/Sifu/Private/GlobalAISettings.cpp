#include "GlobalAISettings.h"

UGlobalAISettings::UGlobalAISettings() {
    this->m_iSerializeVersion = 1;
    this->m_fDelayBeforeInvestigation = 1.50f;
    this->m_fOnPlayerDeathDifficultyRatio = 0.00f;
    this->m_fMaxDistToTriggerSuspicious = 5000.00f;
    this->m_fInvestigationDistance = 250.00f;
    this->m_fSightMaxVerticalAngle = 28.00f;
    this->m_fFallSoundDistance = 1800.00f;
    this->m_fEnemyUpdateDelay = 0.20f;
    this->m_fDelayBetween2SurprisedDialogSegemnt = 5.00f;
    this->m_fMaxGlobalDifficultyValue = 250.00f;
    this->m_fAttackPositionRadius = 120.00f;
    this->m_fDirectOponentAttackPositionRadius = 90.00f;
    this->m_bEnableJiggleWithMove = false;
    this->m_bEnableJiggleWithAnimation = true;
    this->m_fJiggleTolerance = 80.00f;
    this->m_fJiggleMinDist = 100.00f;
    this->m_NoPhaseTransitionOrders.AddDefaulted(3);
    this->m_eJiggleSpeedState = ESpeedState::V1;
    this->m_TraceTargetCapsuleRadius = 15.00f;
    this->m_TraceTargetCapsuleHalfHeight = 60.00f;
    this->m_fTraceTargetForObstacleFrequency = 0.50f;
    this->m_TraceTargetForObstacleChannel = ECC_Pawn;
    this->m_bUseCapsuleRadiusToDetectFriendlyFire = true;
    this->m_iMaxComboStreak = 2;
    this->m_bAlwaysLogComboEvaluationStack = true;
    this->m_fCombatPositionPathCostLimit = 2000.00f;
    this->m_DefaultPositioningOptions.AddDefaulted(2);
    this->m_AttackTicketJokerComboAttackCount[0] = 4;
    this->m_AttackTicketJokerComboAttackCount[1] = 4;
    this->m_AttackTicketJokerComboAttackCount[2] = 4;
    this->m_AttackTicketJokerComboAttackCount[3] = 4;
    this->m_fSpawningTimePerFrame = 0.00f;
    this->m_ClimbNavArea.AddDefaulted(3);
    this->m_DropDownNavAreas.AddDefaulted(3);
    this->m_fTraversalLockTimer = 0.80f;
    this->m_bIsTraversalLockTimerUniversal = true;
    this->m_fDefaultNavLinkCooldown = 5.00f;
    this->m_fPatrolAcceptanceRadius = 30.00f;
    this->m_fTraversalZNavExtent = 500.00f;
    this->m_fStopPredictionRequiredDistance[0] = 0.00f;
    this->m_fStopPredictionRequiredDistance[1] = 0.00f;
    this->m_fStopPredictionRequiredDistance[2] = 0.00f;
    this->m_fStopPredictionRequiredDistance[3] = 0.00f;
    this->m_bCanSlowDownSpeedStateOnPathChanged = true;
    this->m_bStopLockOnEnemyIfFarFromEnemy = true;
    this->m_fDifficultyUpdateRate = 0.00f;
    this->m_DominationGaugeSteps[0] = 0.00f;
    this->m_DominationGaugeSteps[1] = 0.00f;
    this->m_DominationGaugeSteps[2] = 0.00f;
    this->m_DominationGaugeSteps[3] = 0.00f;
    this->m_MaxIndirectOponentPerDominationGauge[0] = 0;
    this->m_MaxIndirectOponentPerDominationGauge[1] = 0;
    this->m_MaxIndirectOponentPerDominationGauge[2] = 0;
    this->m_MaxIndirectOponentPerDominationGauge[3] = 0;
    this->m_fTauntDifficultyBonus = 90.00f;
    this->m_iTauntTicketBehaviorMask = 1;
    this->m_ForbiddenOrdersForDirectOpponent.AddDefaulted(6);
    this->m_fCombatRolesRedistributionFallHeight = 140.00f;
    this->m_fCombatRoleRedistributionRushInitialDelay = 1.00f;
    this->m_fCombatRoleRedistributionRushUpdateDelay = 2.40f;
    this->m_bActivateCancelDamagesOnWeaponsForAI = false;
    this->m_fAIweaponDropImpulseMultiplier = 0.50f;
    this->m_DefenseVsThrowableWindowFrameNb = 20;
    this->m_DefenseVsThrowableStartWindowAnticipationFrameNb = 30;
    this->m_fPrefightStructureBrokenLastChanceDuration = 0.50f;
    this->m_iAvoidWindowMultiHitDelayFramesOffset = -5;
    this->m_iAvoidWindowEndMultiHitFramesOffset = -1;
    this->m_uiThreateningActionsMask = 56;
    this->m_eThreateningAttackOrders.AddDefaulted(6);
    this->m_fFleeMinDist = 350.00f;
    this->m_fTooCloseMaxDist = 150.00f;
    this->m_bTriggerTooCloseOnlyDuringDialog = true;
    this->m_bTriggerTooCloseOnlyOnJoinDialogActors = true;
    this->m_fTicketManagerMaxIterationTime = 0.00f;
    this->m_bTimeSliceTicketManagers = false;
    this->m_bRunTicketManagerDuringSlate = true;
    this->m_fBehaviorChangedMaxRandomDelays[0] = 0.00f;
    this->m_fBehaviorChangedMaxRandomDelays[1] = 0.00f;
    this->m_fBehaviorChangedMaxRandomDelays[2] = 0.00f;
    this->m_fBehaviorChangedMaxRandomDelays[3] = 0.00f;
    this->m_fBehaviorChangedMaxRandomDelays[4] = 0.00f;
    this->m_fBehaviorChangedMaxRandomDelays[5] = 0.00f;
    this->m_fFidgetNearDeathMaxRatio = 0.30f;
    this->m_iLastManBonusPerDomination[0] = -1;
    this->m_iLastManBonusPerDomination[1] = -1;
    this->m_iLastManBonusPerDomination[2] = -1;
    this->m_iLastManBonusPerDomination[3] = -1;
    this->m_iArenaMaxAICharactersPerPool = 10;
}
