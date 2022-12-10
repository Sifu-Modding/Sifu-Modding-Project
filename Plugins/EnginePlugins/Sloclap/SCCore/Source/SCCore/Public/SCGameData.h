#pragma once
#include "CoreMinimal.h"
#include "WorldSave.h"
#include "SCStreamingLevelStateSavable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SCGameData.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FName, FWorldSave> m_WorldStatesSaved;
    
   /* UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FName, FSCStreamingLevelStateSavable> m_StreamingLevelsState;*/
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_ActivatedCheats;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FGameplayTag, FString> m_ActivatedCheatsArguments;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_UnlockedAchievements;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FGameplayTag, FGameplayTagContainer> m_NewlyUnlockedAchievements;
    
    FSCGameData();
};

