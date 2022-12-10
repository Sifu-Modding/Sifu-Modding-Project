#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CharacterSaveDescription.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSaveDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString m_SaveName;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FTimespan m_TimePlayed;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FDateTime m_SaveTimeStamp;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool m_bIsABackupSnapshot;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool m_bIsValid;
    
    SCCORE_API FCharacterSaveDescription();
};

