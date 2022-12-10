#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECharacterGender.h"
#include "CheckPointStruct.h"
#include "ECharacterStat.h"
#include "GameplayTagContainer.h"
#include "DuplicatedSaveData.h"
#include "GameSaveData.generated.h"

class UGameplayEffect;
class USkillGameplayEffect;

USTRUCT(BlueprintType)
struct FGameSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    ECharacterGender m_eGender;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    int32 m_iOutfitIndex;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TArray<TSubclassOf<UGameplayEffect>> m_ShrineEffects;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TArray<TSubclassOf<USkillGameplayEffect>> m_UnlockedSkills;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<TSubclassOf<USkillGameplayEffect>, int32> m_SkillConsolidationLevel;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<ECharacterStat, float> m_DefaultStats;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FName, FCheckPointStruct> m_CheckPointPerLevel;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_PlayerTags;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_GameplayTagContainer;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    float m_fMCDominationGauge;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    int32 m_iLastManGauge;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FName m_CurrentMapTagName;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    float m_fMCHealth;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    float m_fMCFocusGauge;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_CurrentMapOptions;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<int32, FDuplicatedSaveData> m_duplicatedSaveData;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FName, float> m_iHighscorePerLevel;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TArray<float> m_EfficiencyQueue;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    float m_fFloorScore;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    bool m_bLevelScoringComplete;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FName, int32> m_iArenaHighscorePerChallenge;
    
    SIFU_API FGameSaveData();
};

