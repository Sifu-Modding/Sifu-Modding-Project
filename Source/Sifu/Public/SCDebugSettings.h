#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EGameDifficulty.h"
#include "SCDebugSettings.generated.h"

UCLASS(Config=User)
class SIFU_API USCDebugSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    EGameDifficulty m_eForcedDifficulty;
    
    USCDebugSettings();
};

