#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SCStreamingLevelStateSavable.h"
#include "WorldSave.h"
#include "SCGameData.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FWorldSave> m_WorldStatesSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FSCStreamingLevelStateSavable> m_StreamingLevelsState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_ActivatedCheats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FString> m_ActivatedCheatsArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_UnlockedAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagContainer> m_NewlyUnlockedAchievements;
    
    FSCGameData();
};

