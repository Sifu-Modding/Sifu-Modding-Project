#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FilterProperties.h"
#include "InputMappingProfileEnumHandler.h"
#include "SaveAdditionalInfos.h"
#include "InputMappingProfileData.h"
#include "GameplayTagContainer.h"
#include "ProfileData.generated.h"

class USkillGameplayEffect;

USTRUCT(BlueprintType)
struct FProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<FFilterProperties> m_FilterPresets;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    float m_GameOptions[41];
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TMap<FString, FSaveAdditionalInfos> m_SaveAdditionalInfoMap;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FInputMappingProfileEnumHandler m_GamepadProfile;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FInputMappingProfileEnumHandler m_KeyboardProfile;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FInputMappingProfileData m_GamepadCustomMapping;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FInputMappingProfileData m_KeyboardCustomMapping;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    bool m_bInputHoldToggleActivated;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_UnlockedCheats;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<TSubclassOf<USkillGameplayEffect>, int32> m_SkillConsolidationLevel;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    int32 m_iCheatUnlockPoints;
    
    SIFU_API FProfileData();
};

