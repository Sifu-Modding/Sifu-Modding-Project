#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "AchievementUnlockCondition.generated.h"

class UAchievementUnlockCondition;
class UWorld;

UCLASS(Abstract, Blueprintable)
class SCCORE_API UAchievementUnlockCondition : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAchievementUnlockedDyn, UAchievementUnlockCondition*, _condition, bool, _AutoShutdownCondition);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAchievementConditionFailedDyn, UAchievementUnlockCondition*, _condition);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveDynMulticastDelegate, UAchievementUnlockCondition*, Objective);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag m_AchievementTag;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomAchievementTag;
    
    UPROPERTY(BlueprintAssignable)
    FOnAchievementUnlockedDyn m_OnAchievementUnlockedDyn;
    
    UPROPERTY(BlueprintAssignable)
    FOnAchievementConditionFailedDyn m_OnAchievementConditionFailedDyn;
    
    UPROPERTY(BlueprintAssignable)
    FObjectiveDynMulticastDelegate m_OnCounterChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> m_MapWhereUnlockAllowed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag m_ContentRestrictionTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseTimer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fTimerTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bHasCounter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iCountToReach;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bFailOnCounterReached;
    
    UPROPERTY(EditAnywhere)
    bool m_bWantAddToRoot;
    
public:
    UAchievementUnlockCondition();
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockAchievement(bool _bShutdownCondition);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StopTimer();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartTimer();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Shutdown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetAchievementTag(FGameplayTag _newAchievementTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_ResetCounter();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PauseOrResumeTimer(bool _bPause);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsTimerActive() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    void BPF_Init(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable)
    void BPF_IncrementCounter(int32 _iIncr);
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasCounter() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetTimerRemaining() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetCurrentCounter() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetCounterMax() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_ConditionFailed();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_UnlockAchievement_Debug();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_Shutdown();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnTimerEnded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnMatchEnded(bool _bHasWon);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_Init();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    TArray<FString> BPE_GetDebugInfo() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool BPE_CanBeUnlocked(const UWorld* _world) const;
    
};

