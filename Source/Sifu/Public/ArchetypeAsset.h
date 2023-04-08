#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ECharacterGender.h"
#include "AIActionReaction.h"
#include "AIAttackReaction.h"
#include "AIConditionedActionArray.h"
#include "AIDifficultyLevel.h"
#include "AIRangePerCircleIndex.h"
#include "AISuperDizzyParams.h"
#include "AIWeaponInfo.h"
#include "BaseActorConditionInstance.h"
#include "CardinalAnimContainer.h"
#include "EAIArchetype.h"
#include "EAIWuguanTicketEvaluation.h"
#include "EDefenseTactics.h"
#include "ESCAICombatRoles.h"
#include "JiggleAnimContainer.h"
#include "LocomotionPaceSelector.h"
#include "PatrolActivity.h"
#include "SCAITriggerableActionsArray.h"
#include "Templates/SubclassOf.h"
#include "VoiceVariationsAkSwitchContainer.h"
#include "ArchetypeAsset.generated.h"

class ABaseWeapon;
class UAIContextualDefense;
class UAttackPropertiesResistanceDB;
class UAvoidAbility;
class UBaseMovementDB;
class UBehaviorTree;
class UBlackboardData;
class UCurveFloat;
class UDataTable;
class UDodgeTypeUseCaseMatrix;
class UFidgetDB;
class UNavigationQueryFilter;
class UThrowableInfoForAIDataAsset;
class UVitalPointDB;

UCLASS(Blueprintable)
class SIFU_API UArchetypeAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIArchetype m_eAIArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ArchetypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceTargetWidgetDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDismissDeathForTakedown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInfiniteStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGrabbableStructureRatio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISuperDizzyParams m_SuperDizzyPerDifficulty[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanBeSuperDizzy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuperDizzyResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuperDizzyRecoveryCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuperDizzyRecoveryCooldownWhenComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuperDizzyGaugeRatioAfterSuperDizzy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuperDizzyRecoveryPerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvincible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHideHealthGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHideStructureGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAICanSeeForever;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiResilience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiResilienceBonusFromAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAbandonTicketTimeout;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackPropertiesResistanceDB* m_AttackPropertyResistanceDBPerDifficulty[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackPropertiesResistanceDB* m_AttackPropertyResistanceDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iXPBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBreakWeaponOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseMovementDB* m_MovementDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLowStructureOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_GuardRecoveryRateByLife;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_GuardRecoveryRateByLifePerDifficulty[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanDefend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fParriedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStructureBrokenParriedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIContextualDefense* m_ContextualDefense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAvoidAbility> m_AvoidDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDodgeTypeUseCaseMatrix> m_DodgeTypeUseCaseMatrixClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIContextualDefense* m_ContextualDefenseAgainstThrowables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIContextualDefense* m_ContextualDefenseGromGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDefenseTactics, FSCAITriggerableActionsArray> m_DefaultPostDefenseActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDefenseTactics, FAIConditionedActionArray> m_DefaultPostDefenseActionsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanAvoidMultiHitAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDropAnyWeaponAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseWeapon> m_WeaponToEquipAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIWeaponInfo> m_UsableWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UThrowableInfoForAIDataAsset*> m_UsableThrowablesFromGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIWuguanTicketEvaluation, float> m_AttackTicketEvalFactors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIAttackReaction> m_ReactionAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIActionReaction> m_ReactionActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanUseReactionActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFarFromEnemyDistThresold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionPaceSelector m_LocomotionPaceSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> m_NavigationQueryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiHelpSignalTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiLostAttackTicketCause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDifficultyLevel> m_difficultyLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageReceivedToDifficultyBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageDealtToDifficultyMalus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHitWithNoDamageDominationGaugeBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHitWithNoDamageDominationGaugeMalus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTakedownDominationBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuccessfulMCParryBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuccessfulMCAvoidBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* m_Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* m_Blackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanLeaveAbandon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iArchetypeDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceArchetypeSwitchName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterGender, FVoiceVariationsAkSwitchContainer> m_VoiceVariationsSwitchValuesPerGenderMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_BarksDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_BarksDBArena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPatrolActivity> m_PatrolActivities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVitalPointDB* m_VitalPointDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCAICombatRoles m_eRoleAffinity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCAICombatRoles, int32> m_iCirclePerCombatRoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCAICombatRoles, FFloatRange> m_PerRoleCombatPositionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCAICombatRoles, FAIRangePerCircleIndex> m_PerRolePerCircleCombatPositionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCAICombatRoles, int32> m_iCirclePerCombatRolesInPauseOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCAICombatRoles, FAIRangePerCircleIndex> m_PerRolePerCircleCombatPositionRangeInPauseOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCAICombatRoles, FFloatRange> m_fJiggleDelayRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCAICombatRoles, float> m_fJiggleMovementMinDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardinalAnimContainer m_JiggleAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJiggleAnimContainer> m_JiggleAnimationContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_JiggleAnimationsRateModifierRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UFidgetDB* m_FidgetDBs[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanBeSpared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorConditionInstance m_SpareCondition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHealth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHealthMultiplier[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStructure;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStructureMultiplier[3];
    
public:
    UArchetypeAsset();
};

