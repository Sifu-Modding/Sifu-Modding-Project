#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SCAiAction.h"
#include "AICancelCondition.h"
#include "EComboAIConditionGroupOperator.h"
#include "EGlobalBehaviors.h"
#include "ESpeedState.h"
#include "UOrderParamsClassInstance.h"
#include "UOrderParamsInstanceStruct.h"
#include "WGAiAction.generated.h"

class AFightingAIController;
class AFightingCharacter;
class AFightingPlayerController;
class UAIFightingComponent;
class UOrderParams;
class USCCrowdFollowingComponent;

UCLASS(Abstract, Blueprintable)
class SIFU_API UWGAiAction : public USCAiAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eDesiredSpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLockSpeedStateOnSchedule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FUOrderParamsClassInstance> m_orderParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FUOrderParamsInstanceStruct> m_OrderParamsInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCancelOnGlobalBehaviorChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCancellable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAICancelCondition> m_CancelConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComboAIConditionGroupOperator m_CancelConditionOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceIdleExit;
    
public:
    UWGAiAction();

protected:
    UFUNCTION(BlueprintCallable)
    void OnGlobalBehaviorChanged(EGlobalBehaviors _eBehavior, const bool _bFromDialog);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveAbilitySystemGameplayTag(const FGameplayTag& _tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingPlayerController* BPF_GetFirstPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingCharacter* BPF_GetFirstPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingCharacter* BPF_GetFightingCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingCharacter* BPF_GetEnemyCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingCharacter* BPF_GetCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingAIController* BPF_GetAIFightingController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIFightingComponent* BPF_GetAIFightingComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USCCrowdFollowingComponent* BPF_GetAICrowdFollingComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddAbilitySystemGameplayTag(const FGameplayTag& _tag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnCreatedOrderParams(FName _paramsName, UOrderParams* _orderParams);
    
};

