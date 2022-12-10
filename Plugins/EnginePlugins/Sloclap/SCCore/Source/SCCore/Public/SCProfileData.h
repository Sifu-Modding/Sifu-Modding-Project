#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterSaveDescription.h"
#include "MappingSave.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SCProfileData.generated.h"

USTRUCT(BlueprintType)
struct FSCProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    FDateTime m_SaveTimeStamp;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TArray<FCharacterSaveDescription> m_SaveListNames;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FString m_FirstSave;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<FMappingSave> m_Mapping;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FString m_AudioCulture;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FString m_TextCulture;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_UnlockedAchievements;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FGameplayTag, FGameplayTagContainer> m_NewlyUnlockedAchievements;
    
    SCCORE_API FSCProfileData();
};

