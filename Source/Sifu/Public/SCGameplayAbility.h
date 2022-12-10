#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayTagContainer.h"
#include "InputDetection.h"
#include "GameplayTagContainer.h"
#include "EALBinaryOperation.h"
#include "TargetResult.h"
#include "SCGameplayAbilityActorInfo.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "InputAction.h"
#include "UObject/NoExportTypes.h"
#include "SCGameplayAbilityActivationInfo.h"
#include "EOrderType.h"
#include "PlayOrderInfos.h"
#include "NetOrderStruct.h"
#include "SCGameplayAbility.generated.h"

class AFightingCharacter;
class AActor;
class UAbilityPayload;
class UGameplayEffect;
class UAvailabilityLayerData;
class UBaseTargetEvaluation;
class USCGameplayAbility;
class UScriptStruct;

UCLASS()
class SIFU_API USCGameplayAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery m_AdvancedSelfTagCondition;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery m_AdvancedTargetTagCondition;
    
    UPROPERTY(EditAnywhere)
    bool m_bCommitAbilityOnOrderStart;
    
    UPROPERTY(EditAnywhere)
    TArray<FInputDetection> m_Inputs;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAbilityPayload> m_Payload;
    
    UPROPERTY(EditAnywhere)
    bool m_bIgnoreAvailabilityLayers;
    
    UPROPERTY(EditAnywhere)
    bool m_bToggleAbility;
    
    UPROPERTY(EditAnywhere)
    bool m_bHoldToToggle;
    
    UPROPERTY(EditAnywhere)
    bool m_bConsumeAndResetInputs;
    
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_AvailabilityLayersWhileActive;
    
    UPROPERTY(EditAnywhere)
    EALBinaryOperation m_eALOperation;
    
    UPROPERTY(EditAnywhere)
    bool m_bTargetBecomesLockMoveTarget;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> m_CooldownGameplayEffectClassOnAbilityEnd;
    
protected:
    UPROPERTY(Transient)
    UAbilityPayload* m_PayloadInstance;
    
private:
    UPROPERTY()
    FGameplayTagContainer m_CombinedCooldownTags;
    
public:
    USCGameplayAbility();
    UFUNCTION(BlueprintPure)
    UBaseTargetEvaluation* BPF_GetTargetEvaluationFromTargetResult(const AFightingCharacter* _character, const FTargetResult& _targetInfos) const;
    
protected:
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetTarget(const FSCGameplayAbilityActorInfo& _ActorInfo, const FGameplayEventData& _triggerEventData) const;
    
    UFUNCTION(BlueprintPure)
    InputAction BPF_GetFirstBestAction(const FSCGameplayAbilityActorInfo& _ActorInfo) const;
    
public:
    UFUNCTION(BlueprintPure)
    FVector2D BPF_GetActionVectorValue(const FSCGameplayAbilityActorInfo& _actoInfos) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_PreUpdatePayloadFromTargetting(UAbilityPayload* _payload, AActor* _self) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_PostUpdatePayloadFromTargetting(UAbilityPayload* _payload, AActor* _self, InputAction _eInput, const FTargetResult& _target) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnActivateAbility(const FSCGameplayAbilityActivationInfo& _activationInfos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_InitPayload(UAbilityPayload* _ePayload) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    AActor* BPE_GetTarget(const FSCGameplayAbilityActorInfo& _ActorInfo) const;
    
public:
    UFUNCTION(BlueprintCallable)
    static uint8 BasePlayOrder(USCGameplayAbility* _self, const FSCGameplayAbilityActivationInfo& _activationInfo, bool _bOnTarget, AActor* _customTarget, EOrderType _eOrderType, FName _BPOrderID, FPlayOrderInfos _playOrderInfos, bool _bBindToAbility, UScriptStruct* _baseNetOrderType, const FNetOrderStruct& _netOrderStruct);
    
};

