#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/EngineTypes.h"
#include "ESCDebugActorBoxType.h"
#include "SCCoreUserSettings.generated.h"

UCLASS(Blueprintable, Config=User)
class SCCORE_API USCCoreUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableGameFlowInPIE;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableSaveLevelInPIE;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoSkipCutscenes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableVolumeSolidDraw;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPauseOnAiNextAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bListPoolableActorsInOutliner;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoGenerateActorPools;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugDisplayAllPools;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCDebugActorBoxType m_eDebugActorSelectionBoxType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath m_PhonemeDictionaryPath;
    
    USCCoreUserSettings();
};

