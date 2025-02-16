#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "ArenaBatch.h"
#include "ArenaBatchProgressionInfo.h"
#include "ArenaProgressionInfo.h"
#include "ArenaManagerBlueprintHelper.generated.h"

class UArenaChallengeDescription;
class UArenaSettings;
class UBaseArenaObjective;

UCLASS(Blueprintable)
class SIFU_API UArenaManagerBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UArenaManagerBlueprintHelper();

    UFUNCTION(BlueprintCallable)
    static void BPF_SetCurrentArena(int32 _iBatchIndex, int32 _iChallengeIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetArenaCustomOutfit(int32 _outfitIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ResetArenaCustomOutfit();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_OnCurrentChallengeSpecificLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_MarkChallengeAsSeen(const UArenaChallengeDescription* _challengeDescription);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsDebugChallenge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsArenaCustomModeEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_HasChallengeBeenSeen(const UArenaChallengeDescription* _challengeDescription);
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_GetMaxAICharactersPerPool();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetLastSelectedChallengeIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetLastSelectedBatchIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBaseArenaObjective* BPF_GetCurrentMasterObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetCurrentChallengeIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UArenaChallengeDescription* BPF_GetCurrentChallenge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag BPF_GetCurrentBatchCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag BPF_GetCurrentArena();
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_GetChallengeHighScore(UArenaChallengeDescription* _challengeDescription);
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_GetChallengeBestStarCount(const UArenaChallengeDescription* _challengeDescription);
    
    UFUNCTION(BlueprintCallable)
    static UArenaSettings* BPF_GetArenaSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetArenaCustomModeOutfit();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FArenaBatch> BPF_GetArenaBatches(FGameplayTag _restrictionTag, FGameplayTag _filterTag);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_EnableProgressionSystem(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_EnableArenaCustomMode(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static FArenaBatchProgressionInfo BPF_ComputeBatchProgression(const FArenaBatch& _ArenaBatch);
    
    UFUNCTION(BlueprintCallable)
    static FArenaProgressionInfo BPF_ComputeArenaProgression(FGameplayTag _restrictionTag, FGameplayTag _filterTag);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ComputeArenaFinished(FGameplayTag _restrictionTag, FGameplayTag _filterTag, uint8& _outuiArenaFinished, uint8& _outuiTotalArena);
    
};

