#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ArenaBatch.h"
#include "EArenaUnlockingBehavior.h"
#include "ArenaSettings.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class SIFU_API UArenaSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagContainer> m_ArenasPerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArenaBatch> m_ArenaBatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fObjectiveStartTimerValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArenaUnlockingBehavior m_eArenaUnlockingBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxStarCountThatUnlocksBatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxStarCountThatGrantsCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCurrencyPerStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxNumberOfDifferentCharacterBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNbImpostorPerClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_fDelayBetweenSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOutsideVolumeCaptureTimeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBaseCaptureSpeedPerSecond;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCaptureSpeedMultiplierPerScoreMultiplier[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNoEnemyInsideHardpointMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableAllHardpointsEnemiesKilledMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAllHardpointsEnemiesKilledMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayBetweenHardpointActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayBeforeScoreDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CaptureScoreDecreaseOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bChangeAIToAbandoningOnHardpointCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAIDespawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAIDespawnDelayWhileNotRendered;
    
    UArenaSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCaptureSpeedMultiplierPerScoreMultiplier(int32 _iScoreMultiplierIndex) const;
    
};

