#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SCSaveObjectGameData.h"
#include "DuplicatedSaveData.h"
#include "ECharacterStat.h"
#include "GameSaveData.h"
#include "WGSaveObjectGameData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWGSaveObjectGameData : public USCSaveObjectGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameSaveData m_SavedData;
    
    UWGSaveObjectGameData();
    UFUNCTION(BlueprintCallable)
    void ReloadDefaultStatsFromDataTable();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveGameplayTag(FGameplayTag _gameplayTagToAdd);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_HasGameplayTag(FGameplayTag _gameplayTagToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDefaultStatValue(ECharacterStat _eStat, bool& _bFound) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddOrUpdateMaskSnapshot(int32 _iMask, const FDuplicatedSaveData& _duplicatedData);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddGameplayTag(FGameplayTag _gameplayTagToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_SynchronizeAchievementProgress(const TMap<FString, float>& _achievementProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString BPE_SnapshotSaveMask(int32 _iSaveMaskToBackup, int32 _iSaveEntryToExclude);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool BPE_ShouldLoadAntiCheatMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString BPE_OverrideSaveMaskWithSnapshot(int32 _iSnapshotIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 BPE_GenerateGlobalAllowedSaveMask() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_CopyToSaveWithMask(USCSaveObjectGameData* _inSaveTo, int32 _iTestMask);
    
};

