#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EGameDifficulty.h"
#include "SCDebugSettings.generated.h"

UCLASS(Blueprintable, Config=User)
class SIFU_API USCDebugSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameDifficulty m_eForcedDifficulty;
    
    USCDebugSettings();
};

