#pragma once
#include "CoreMinimal.h"
#include "ETutorialUnlockState.h"
#include "TutorialUnlockStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FTutorialUnlockStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ETutorialUnlockState m_eUnlockState;
    
    FTutorialUnlockStruct();
};

