#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "ArenaBatch.h"
#include "ArenaBatchProgressionInfo.h"
#include "ArenaParams.h"
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
    static void BPF_SetChallengeIndex(int32 _iChallengeIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetArena(FGameplayTag _arenaTag);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_OnCurrentChallengeSpecificLevelShown();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_OnCurrentChallengeSpecificLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_MarkChallengeAsSeen(const UArenaChallengeDescription* _challengeDescription);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsDebugChallenge();
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_HasChallengeBeenSeen(const UArenaChallengeDescription* _challengeDescription);
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_GetMaxAICharactersPerPool();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetLastSelectedChallengeIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetLastSelectedBatchIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FArenaParams BPF_GetCurrentParams();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBaseArenaObjective* BPF_GetCurrentMasterObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetCurrentChallengeIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UArenaChallengeDescription* BPF_GetCurrentChallenge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag BPF_GetCurrentArena();
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_GetChallengeHighScore(UArenaChallengeDescription* _challengeDescription);
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_GetChallengeBestStarCount(const UArenaChallengeDescription* _challengeDescription);
    
    UFUNCTION(BlueprintCallable)
    static UArenaSettings* BPF_GetArenaSettings();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FArenaBatch> BPF_GetArenaBatches(FGameplayTag _restrictionTag);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_EnableProgressionSystem(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static FArenaBatchProgressionInfo BPF_ComputeBatchProgression(const FArenaBatch& _ArenaBatch);
    
    UFUNCTION(BlueprintCallable)
    static FArenaProgressionInfo BPF_ComputeArenaProgression(FGameplayTag _restrictionTag);
    
};

