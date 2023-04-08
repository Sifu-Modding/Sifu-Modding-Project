#pragma once
#include "CoreMinimal.h"
#include "BaseWeaponOverrideInfo.h"
#include "ComboOverride.h"
#include "EAIWuguanTicketEvaluation.h"
#include "ESCAICombatRoles.h"
#include "LocomotionPaceSelector.h"
#include "Templates/SubclassOf.h"
#include "WeaponOverrideInfo.generated.h"

class UAIContextualDefense;
class UAvoidAbility;
class UBaseMovementDB;

USTRUCT(BlueprintType)
struct FWeaponOverrideInfo : public FBaseWeaponOverrideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIContextualDefense* m_ContextualDefenseOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComboOverride> m_ComboOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAvoidAbility> m_AvoidAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseMovementDB* m_MovementDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActivateAttackTicketFactorsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIWuguanTicketEvaluation, float> m_AttackTicketEvaluationFactorsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActivateCirclePerCombatRoleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCAICombatRoles, int32> m_CirclePerCombatRolesOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideLocomotionPaceSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionPaceSelector m_OverridingLocomotionPaceSelector;
    
    SIFU_API FWeaponOverrideInfo();
};

