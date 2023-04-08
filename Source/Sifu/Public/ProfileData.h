#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ECharacterGender.h"
#include "ArenaChallengeSave.h"
#include "FilterProperties.h"
#include "InputMappingProfileData.h"
#include "InputMappingProfileEnumHandler.h"
#include "SaveAdditionalInfos.h"
#include "Templates/SubclassOf.h"
#include "ProfileData.generated.h"

class USkillGameplayEffect;

USTRUCT(BlueprintType)
struct FProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFilterProperties> m_FilterPresets;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float m_GameOptions[41];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FString, FSaveAdditionalInfos> m_SaveAdditionalInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FInputMappingProfileEnumHandler m_GamepadProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FInputMappingProfileEnumHandler m_KeyboardProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FInputMappingProfileData m_GamepadCustomMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FInputMappingProfileData m_KeyboardCustomMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bInputHoldToggleActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_UnlockedCheats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<USkillGameplayEffect>, int32> m_SkillConsolidationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_iCheatUnlockPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FArenaChallengeSave> m_aArenaSavePerChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ECharacterGender m_eChallengeGender;
    
    SIFU_API FProfileData();
};

