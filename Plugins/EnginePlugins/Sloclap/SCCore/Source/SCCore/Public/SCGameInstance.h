#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"
#include "SCGameInstance.generated.h"

class UObject;
class UCurveFloat;

UCLASS(NonTransient)
class SCCORE_API USCGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLowPerformanceModeChangedDelegate, bool, bLowPerformanceMode);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLowPerformanceModeChanged, bool, bLowPerformanceMode);
    
private:
    UPROPERTY(Config)
    bool m_bEnableDevMode;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UObject*> m_ObjectToLoadAtBegining;
    
    UPROPERTY(Transient)
    UCurveFloat* m_HudOffsetFromBlackBarWhenAboveDefaultRatioRuntime;
    
    UPROPERTY(Transient)
    UCurveFloat* m_HudOffsetFromBlackBarWhenBelowDefaultRatioRuntime;
    
public:
    USCGameInstance();
private:
    UFUNCTION(Exec)
    void UnlockInGameAchievement(const FGameplayTag& _achievementToUnlock);
    
    UFUNCTION(Exec)
    void UnlockAllInGameAchievements();
    
public:
    UFUNCTION(Exec)
    void TriggerPGOWriteFile();
    
private:
    UFUNCTION(Exec)
    void ResetAllInGameAchievements();
    
    UFUNCTION(Exec)
    void LockInGameAchievement(const FGameplayTag& _achievementToLock);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BindToLowPerformanceChanged(USCGameInstance::FLowPerformanceModeChanged Delegate);
    
};

