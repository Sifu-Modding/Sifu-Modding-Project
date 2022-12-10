#pragma once
#include "CoreMinimal.h"
#include "WGAchievementUnlockCondition.h"
#include "OnStarsCountChangedDelegate.h"
#include "OnScoreChangedDelegate.h"
#include "EDownState.h"
#include "EScoreComparisonType.h"
#include "BaseArenaObjective.generated.h"

class UCharacterHealthComponent;

UCLASS(Abstract)
class SIFU_API UBaseArenaObjective : public UWGAchievementUnlockCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnStarsCountChanged m_OnStarsCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnScoreChanged m_OnScoreChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EScoreComparisonType m_eScoreComparisonType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> m_ScoreThresholds;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iScore;
    
    UPROPERTY()
    bool m_bUseChrono;
    
private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    int32 m_iStarCount;
    
public:
    UBaseArenaObjective();
    UFUNCTION(BlueprintPure)
    bool ShouldShowScoreAsTime() const;
    
private:
    UFUNCTION()
    void OnPlayerDownStateChanged(UCharacterHealthComponent* _healthComponent, EDownState _state);
    
protected:
    UFUNCTION()
    void OnGiveInitialControlToPlayer();
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_IsValidLevel(int32 _iLevel) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetStarsCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetScoreThreshold(int32 _iLevel) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetScore() const;
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_CountObtainedStars(int32 _iScore);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ComputeHighScore(int32& _iOutSavedHighScore, bool& _bOutIsNewHighScore);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPlayerPawnReady();
    
};

