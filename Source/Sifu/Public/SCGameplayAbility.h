#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/GameplayAbility.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EALBinaryOperation.h"
#include "EOrderType.h"
#include "InputAction.h"
#include "InputDetection.h"
#include "NetOrderStruct.h"
#include "PlayOrderInfos.h"
#include "SCGameplayAbilityActivationInfo.h"
#include "SCGameplayAbilityActorInfo.h"
#include "TargetResult.h"
#include "Templates/SubclassOf.h"
#include "SCGameplayAbility.generated.h"

class AActor;
class AFightingCharacter;
class UAbilityPayload;
class UAvailabilityLayerData;
class UBaseTargetEvaluation;
class UGameplayEffect;
class USCGameplayAbility;
class UScriptStruct;

UCLASS(Blueprintable)
class SIFU_API USCGameplayAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery m_AdvancedSelfTagCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery m_AdvancedTargetTagCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCommitAbilityOnOrderStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputDetection> m_Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAbilityPayload> m_Payload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreAvailabilityLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bToggleAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHoldToToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bConsumeAndResetInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_AvailabilityLayersWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EALBinaryOperation m_eALOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTargetBecomesLockMoveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> m_CooldownGameplayEffectClassOnAbilityEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityPayload* m_PayloadInstance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_CombinedCooldownTags;
    
public:
    USCGameplayAbility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseTargetEvaluation* BPF_GetTargetEvaluationFromTargetResult(const AFightingCharacter* _character, const FTargetResult& _targetInfos) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetTarget(const FSCGameplayAbilityActorInfo& _ActorInfo, const FGameplayEventData& _triggerEventData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    InputAction BPF_GetFirstBestAction(const FSCGameplayAbilityActorInfo& _ActorInfo) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D BPF_GetActionVectorValue(const FSCGameplayAbilityActorInfo& _actoInfos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PreUpdatePayloadFromTargetting(UAbilityPayload* _payload, AActor* _self) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PostUpdatePayloadFromTargetting(UAbilityPayload* _payload, AActor* _self, InputAction _eInput, const FTargetResult& _target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnActivateAbility(const FSCGameplayAbilityActivationInfo& _activationInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitPayload(UAbilityPayload* _ePayload) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* BPE_GetTarget(const FSCGameplayAbilityActorInfo& _ActorInfo) const;
    
public:
    UFUNCTION(BlueprintCallable)
    static uint8 BasePlayOrder(USCGameplayAbility* _self, const FSCGameplayAbilityActivationInfo& _activationInfo, bool _bOnTarget, AActor* _customTarget, EOrderType _eOrderType, FName _BPOrderID, FPlayOrderInfos _playOrderInfos, bool _bBindToAbility, UScriptStruct* _baseNetOrderType, const FNetOrderStruct& _netOrderStruct);
    
};

