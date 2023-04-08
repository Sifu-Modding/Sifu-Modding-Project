#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCDelegate.h"
#include "DamageInfos.h"
#include "EAlertLevel.h"
#include "EAlertLevelThreshold.h"
#include "EAlertedReason.h"
#include "EFightingState.h"
#include "EGlobalBehaviors.h"
#include "EMcDominationGaugeSteps.h"
#include "EOrderState.h"
#include "EOrderType.h"
#include "ESCAICombatRoles.h"
#include "ESCAICombatRolesChangeReason.h"
#include "AIDirectorActor.generated.h"

class AAISituationActor;
class ABaseCharacter;
class AFightingCharacter;
class UAIFightingComponent;
class USCAiAction;

UCLASS(Blueprintable)
class SIFU_API AAIDirectorActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAIDeathDetected, const AFightingCharacter*, _AICharacter, const FDamageInfos&, _damageInfos);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGlobalBehaviorChanged, EGlobalBehaviors, EGlobalBehaviors);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAlertLevelChangedMulticastDynamic, EAlertLevel, EAlertLevel);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FAlertLevelChanged, EAlertLevel, EAlertLevel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalBehaviorChanged OnGlobalBehaviorsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIDeathDetected OnAIDeathDetected;
    
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnDifficultyLevelChanged;*/
    
    AAIDirectorActor();
    UFUNCTION(BlueprintCallable)
    static void BPF_UnbindFromAlertLevelChanged(AAIDirectorActor::FAlertLevelChanged Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_RemoveGlobalAlertLevelThreshold(FName _name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAlertLevel BPF_GlobalAlertLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAlertLevel BPF_GetAlertLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetAIsForEnemy(const AActor* _enemyActor, ESCAICombatRoles _eCombatRole, TArray<AActor*>& _AICharactersOutArray) const;
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BindToAlertLevelChanged(AAIDirectorActor::FAlertLevelChanged Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_AddGlobalAlertLevelThreshold(EAlertLevel _eLevel, EAlertLevelThreshold _eType, FName _name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSituationDeactivated(const AAISituationActor* _situationActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSituationActivated(const AAISituationActor* _situationActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSafeSanctuaryBarkTrigger(const AFightingCharacter* _Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMCDominationChanged(EMcDominationGaugeSteps _NewStep);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnLastManPhaseStarted(const UAIFightingComponent* _aiComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnGlobalBehaviorChanged(const UAIFightingComponent* _aiComponent, EGlobalBehaviors _NewBehavior, EAlertedReason _AlertedReason, bool _SkipBark);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEnemyRevival(ABaseCharacter* _Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEnemyPickedWeapon(const AFightingCharacter* _Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEnemyOrderStateChanged(const AFightingCharacter* _Enemy, EOrderType _OrderType, EOrderState _OrderState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEnemyFightingStateChanged(EFightingState _eFightingState, bool _bPushed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEnemyDeathDetected(const AFightingCharacter* _Enemy, const FDamageInfos& _damageInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCombatRolesChanged(ESCAICombatRolesChangeReason _eReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAIDeathDetected(const AFightingCharacter* _AICharacter, const FDamageInfos& _damageInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAIActionExecute(const UAIFightingComponent* _aiComponent, const USCAiAction* _AIAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_CanAICharacterSpeak(const AFightingCharacter* Character);
    
};

