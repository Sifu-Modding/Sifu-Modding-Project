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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_AchievementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCustomAchievementTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAchievementUnlockedDyn m_OnAchievementUnlockedDyn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAchievementConditionFailedDyn m_OnAchievementConditionFailedDyn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveDynMulticastDelegate m_OnCounterChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_MapWhereUnlockAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_ContentRestrictionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCountToReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFailOnCounterReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsTimerActive() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    void BPF_Init(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable)
    void BPF_IncrementCounter(int32 _iIncr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetTimerRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCounterMax() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_ConditionFailed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UnlockAchievement_Debug();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Shutdown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnTimerEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMatchEnded(bool _bHasWon);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Init();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FString> BPE_GetDebugInfo() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool BPE_CanBeUnlocked(const UWorld* _world) const;
    
};

