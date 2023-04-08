#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CharacterSaveDescription.h"
#include "MappingSave.h"
#include "SCProfileData.generated.h"

USTRUCT(BlueprintType)
struct FSCProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime m_SaveTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FCharacterSaveDescription> m_SaveListNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString m_FirstSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMappingSave> m_Mapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString m_AudioCulture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString m_TextCulture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_UnlockedAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagContainer> m_NewlyUnlockedAchievements;
    
    SCCORE_API FSCProfileData();
};

