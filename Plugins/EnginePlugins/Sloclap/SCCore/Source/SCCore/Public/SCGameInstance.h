#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"
#include "SCGameInstance.generated.h"

class UCurveFloat;
class UObject;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class SCCORE_API USCGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCheatsUpdated, bool, _bApplied);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLowPerformanceModeChangedDelegate, bool, bLowPerformanceMode);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLowPerformanceModeChanged, bool, bLowPerformanceMode);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCheatsUpdated m_OnCheatsUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableDevMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_ObjectToLoadAtBegining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_HudOffsetFromBlackBarWhenAboveDefaultRatioRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_HudOffsetFromBlackBarWhenBelowDefaultRatioRuntime;
    
public:
    USCGameInstance();

private:
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockInGameAchievement(const FGameplayTag& _achievementToUnlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllInGameAchievements();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerPGOWriteFile();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAllInGameAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockInGameAchievement(const FGameplayTag& _achievementToLock);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BindToLowPerformanceChanged(USCGameInstance::FLowPerformanceModeChanged Delegate);
    
};

