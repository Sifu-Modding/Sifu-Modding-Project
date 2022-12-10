#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EDefenseTactics.h"
#include "UObject/Object.h"
#include "AIAttackReaction.h"
#include "AIWeaponInfo.h"
#include "SCAITriggerableActionsArray.h"
#include "EAIArchetype.h"
#include "ECharacterGender.h"
#include "AISuperDizzyParams.h"
#include "AIConditionedActionArray.h"
#include "EAIWuguanTicketEvaluation.h"
#include "AIActionReaction.h"
#include "LocomotionPaceSelector.h"
#include "AIDifficultyLevel.h"
#include "CardinalAnimContainer.h"
#include "VoiceVariationsAkSwitchContainer.h"
#include "PatrolActivity.h"
#include "ESCAICombatRoles.h"
#include "AIRangePerCircleIndex.h"
#include "UObject/NoExportTypes.h"
#include "JiggleAnimContainer.h"
#include "BaseActorConditionInstance.h"
#include "ArchetypeAsset.generated.h"

class UAvoidAbility;
class UCurveFloat;
class UAttackPropertiesResistanceDB;
class UBaseMovementDB;
class UDodgeTypeUseCaseMatrix;
class UAIContextualDefense;
class ABaseWeapon;
class UThrowableInfoForAIDataAsset;
class UFidgetDB;
class UNavigationQueryFilter;
class UBehaviorTree;
class UBlackboardData;
class UDataTable;
class UVitalPointDB;

UCLASS(BlueprintType)
class SIFU_API UArchetypeAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAIArchetype m_eAIArchetype;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_ArchetypeName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsBoss;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bForceTargetWidgetDisplay;
    
    UPROPERTY(EditAnywhere)
    bool m_bDismissDeathForTakedown;
    
    UPROPERTY(EditAnywhere)
    bool m_bInfiniteStructure;
    
    UPROPERTY(EditAnywhere)
    float m_fGrabbableStructureRatio;
    
    UPROPERTY(EditAnywhere)
    FAISuperDizzyParams m_SuperDizzyPerDifficulty[3];
    
    UPROPERTY()
    bool m_bCanBeSuperDizzy;
    
    UPROPERTY()
    float m_fSuperDizzyResistance;
    
    UPROPERTY()
    float m_fSuperDizzyRecoveryCooldown;
    
    UPROPERTY()
    float m_fSuperDizzyRecoveryCooldownWhenComplete;
    
    UPROPERTY()
    float m_fSuperDizzyGaugeRatioAfterSuperDizzy;
    
    UPROPERTY()
    float m_fSuperDizzyRecoveryPerSec;
    
    UPROPERTY(EditAnywhere)
    float m_fSpeed;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsSpecial;
    
    UPROPERTY(EditAnywhere)
    float m_fDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool m_bInvincible;
    
    UPROPERTY(EditAnywhere)
    bool m_bHideHealthGauge;
    
    UPROPERTY(EditAnywhere)
    bool m_bHideStructureGauge;
    
    UPROPERTY(EditAnywhere)
    bool m_bAICanSeeForever;
    
    UPROPERTY(EditAnywhere)
    uint8 m_uiResilience;
    
    UPROPERTY(EditAnywhere)
    uint8 m_uiResilienceBonusFromAttack;
    
    UPROPERTY(EditAnywhere)
    float m_fAbandonTicketTimeout;
    
    UPROPERTY(EditAnywhere)
    UAttackPropertiesResistanceDB* m_AttackPropertyResistanceDBPerDifficulty[3];
    
    UPROPERTY()
    UAttackPropertiesResistanceDB* m_AttackPropertyResistanceDB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iXPBonus;
    
    UPROPERTY(EditAnywhere)
    bool m_bBreakWeaponOnDeath;
    
    UPROPERTY(EditAnywhere)
    UBaseMovementDB* m_MovementDB;
    
    UPROPERTY(EditAnywhere)
    bool m_bLowStructureOnSpawn;
    
    UPROPERTY()
    UCurveFloat* m_GuardRecoveryRateByLife;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_GuardRecoveryRateByLifePerDifficulty[3];
    
    UPROPERTY(EditAnywhere)
    bool m_bCanDefend;
    
    UPROPERTY(EditAnywhere)
    float m_fParriedDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fStructureBrokenParriedDuration;
    
    UPROPERTY(EditAnywhere)
    UAIContextualDefense* m_ContextualDefense;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAvoidAbility> m_AvoidDB;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDodgeTypeUseCaseMatrix> m_DodgeTypeUseCaseMatrixClass;
    
    UPROPERTY(EditAnywhere)
    UAIContextualDefense* m_ContextualDefenseAgainstThrowables;
    
    UPROPERTY(EditAnywhere)
    UAIContextualDefense* m_ContextualDefenseGromGround;
    
    UPROPERTY()
    TMap<EDefenseTactics, FSCAITriggerableActionsArray> m_DefaultPostDefenseActions;
    
    UPROPERTY(EditAnywhere)
    TMap<EDefenseTactics, FAIConditionedActionArray> m_DefaultPostDefenseActionsMap;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanAvoidMultiHitAttacks;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanAttack;
    
    UPROPERTY(EditAnywhere)
    bool m_bDropAnyWeaponAtStart;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ABaseWeapon> m_WeaponToEquipAtStart;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIWeaponInfo> m_UsableWeapons;
    
    UPROPERTY(EditAnywhere)
    TArray<UThrowableInfoForAIDataAsset*> m_UsableThrowablesFromGround;
    
    UPROPERTY(EditAnywhere)
    TMap<EAIWuguanTicketEvaluation, float> m_AttackTicketEvalFactors;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIAttackReaction> m_ReactionAttacks;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIActionReaction> m_ReactionActions;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanUseReactionActions;
    
    UPROPERTY(EditAnywhere)
    float m_fFarFromEnemyDistThresold;
    
    UPROPERTY(EditAnywhere)
    FLocomotionPaceSelector m_LocomotionPaceSelector;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> m_NavigationQueryFilter;
    
    UPROPERTY(EditAnywhere)
    uint8 m_uiHelpSignalTriggers;
    
    UPROPERTY(EditAnywhere)
    uint8 m_uiLostAttackTicketCause;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIDifficultyLevel> m_difficultyLevels;
    
    UPROPERTY(EditAnywhere)
    float m_fDamageReceivedToDifficultyBonus;
    
    UPROPERTY(EditAnywhere)
    float m_fDamageDealtToDifficultyMalus;
    
    UPROPERTY(EditAnywhere)
    float m_fHitWithNoDamageDominationGaugeBonus;
    
    UPROPERTY(EditAnywhere)
    float m_fHitWithNoDamageDominationGaugeMalus;
    
    UPROPERTY(EditAnywhere)
    float m_fTakedownDominationBonus;
    
    UPROPERTY(EditAnywhere)
    float m_fSuccessfulMCParryBonus;
    
    UPROPERTY(EditAnywhere)
    float m_fSuccessfulMCAvoidBonus;
    
    UPROPERTY(EditAnywhere)
    float m_fRespawnTime;
    
    UPROPERTY(EditAnywhere)
    UBehaviorTree* m_Behavior;
    
    UPROPERTY(EditAnywhere)
    UBlackboardData* m_Blackboard;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanLeaveAbandon;
    
    UPROPERTY(EditAnywhere)
    int32 m_iArchetypeDifficulty;
    
    UPROPERTY(EditAnywhere)
    FName m_VoiceArchetypeSwitchName;
    
    UPROPERTY(EditAnywhere)
    TMap<ECharacterGender, FVoiceVariationsAkSwitchContainer> m_VoiceVariationsSwitchValuesPerGenderMap;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_BarksDb;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FPatrolActivity> m_PatrolActivities;
    
    UPROPERTY(EditAnywhere)
    UVitalPointDB* m_VitalPointDB;
    
    UPROPERTY(EditAnywhere)
    ESCAICombatRoles m_eRoleAffinity;
    
    UPROPERTY(EditAnywhere)
    TMap<ESCAICombatRoles, int32> m_iCirclePerCombatRoles;
    
    UPROPERTY()
    TMap<ESCAICombatRoles, FFloatRange> m_PerRoleCombatPositionRange;
    
    UPROPERTY(EditAnywhere)
    TMap<ESCAICombatRoles, FAIRangePerCircleIndex> m_PerRolePerCircleCombatPositionRange;
    
    UPROPERTY(EditAnywhere)
    TMap<ESCAICombatRoles, int32> m_iCirclePerCombatRolesInPauseOverride;
    
    UPROPERTY(EditAnywhere)
    TMap<ESCAICombatRoles, FAIRangePerCircleIndex> m_PerRolePerCircleCombatPositionRangeInPauseOverride;
    
    UPROPERTY(EditAnywhere)
    TMap<ESCAICombatRoles, FFloatRange> m_fJiggleDelayRange;
    
    UPROPERTY(EditAnywhere)
    TMap<ESCAICombatRoles, float> m_fJiggleMovementMinDist;
    
    UPROPERTY()
    FCardinalAnimContainer m_JiggleAnimations;
    
    UPROPERTY(EditAnywhere)
    TArray<FJiggleAnimContainer> m_JiggleAnimationContainers;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_JiggleAnimationsRateModifierRange;
    
    UPROPERTY(EditAnywhere)
    UFidgetDB* m_FidgetDBs[5];
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bCanBeSpared;
    
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_SpareCondition;
    
private:
    UPROPERTY(EditAnywhere)
    float m_fHealth;
    
    UPROPERTY(EditAnywhere)
    float m_fHealthMultiplier[3];
    
    UPROPERTY(EditAnywhere)
    float m_fStructure;
    
    UPROPERTY(EditAnywhere)
    float m_fStructureMultiplier[3];
    
public:
    UArchetypeAsset();
};

