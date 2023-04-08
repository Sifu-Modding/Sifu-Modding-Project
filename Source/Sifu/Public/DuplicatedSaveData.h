#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ECharacterGender.h"
#include "ECharacterStat.h"
#include "Templates/SubclassOf.h"
#include "DuplicatedSaveData.generated.h"

class UGameplayEffect;
class USkillGameplayEffect;

USTRUCT(BlueprintType)
struct FDuplicatedSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ECharacterGender m_eGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> m_ShrineEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USkillGameplayEffect>> m_UnlockedSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<USkillGameplayEffect>, int32> m_SkillConsolidationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<ECharacterStat, float> m_DefaultStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_PlayerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_GameplayTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float m_fMCDominationGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_iLastManGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_duplicatedSaveEntries;
    
    SIFU_API FDuplicatedSaveData();
};

