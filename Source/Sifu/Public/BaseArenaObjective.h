#pragma once
#include "CoreMinimal.h"
#include "SCDelegate.h"
#include "EDownState.h"
#include "EScoreComparisonType.h"
#include "StarUnlockConditionClassInstance.h"
#include "WGAchievementUnlockCondition.h"
#include "BaseArenaObjective.generated.h"

class UCharacterHealthComponent;
class UOrderComponent;
class UStarUnlockCondition;

UCLASS(Abstract, Blueprintable)
class SIFU_API UBaseArenaObjective : public UWGAchievementUnlockCondition {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStarsCountChanged, int32, _newCount, int32, _oldCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScoreChanged, int32, _newScore);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStarsCountChanged m_OnStarsCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScoreChanged m_OnScoreChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicMulticast OnObjectiveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicMulticast ObjectiveStartTimerElapsedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScoreComparisonType m_eScoreComparisonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_ScoreThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStarUnlockConditionClassInstance m_GoldenStarUnlockCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseChrono;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPauseChronoOnTakeDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsArenaObjectiveComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iAlmostCompleteRemainingStepCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iStarCount;
    
public:
    UBaseArenaObjective();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowScoreAsTime() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerTakeDownEnemyStarted(uint8 _uiID, UOrderComponent* _OrderComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerTakeDownEnemyEnded(uint8 _uiID, UOrderComponent* _OrderComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDownStateChanged(UCharacterHealthComponent* _healthComponent, EDownState _state);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGiveInitialControlToPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CountObtainedStars(int32 _iScore, bool _bCountGoldenStar) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_ResumeChrono();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PauseChrono();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsValidLevel(int32 _iLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetStarsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetScoreThreshold(int32 _iLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStarUnlockCondition* BPF_GetGoldenStarUnlockCondition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentChronoScore() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_DebugGiveBestScore();
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_CountObtainedStars(int32 _iScore);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ComputeHighScore(int32& _iOutSavedHighScore, bool& _bOutIsNewHighScore);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetObjectiveAlmostCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPlayerPawnReady();
    
};

