#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/EngineTypes.h"
#include "SCDialogPerUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class SCDIALOGMANAGERPLUGIN_API USCDialogPerUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath m_DialogProjectPath;
    
    USCDialogPerUserSettings();
};

