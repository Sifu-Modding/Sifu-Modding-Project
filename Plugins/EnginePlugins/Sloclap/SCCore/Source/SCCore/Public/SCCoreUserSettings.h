#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/EngineTypes.h"
#include "ESCDebugActorBoxType.h"
#include "SCCoreUserSettings.generated.h"

UCLASS(Config=User)
class SCCORE_API USCCoreUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool m_bEnableGameFlowInPIE;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bEnableSaveLevelInPIE;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bAutoSkipCutscenes;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bEnableVolumeSolidDraw;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bPauseOnAiNextAction;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bListPoolableActorsInOutliner;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bAutoGenerateActorPools;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bDebugDisplayAllPools;
    
    UPROPERTY(Config, EditAnywhere)
    ESCDebugActorBoxType m_eDebugActorSelectionBoxType;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath m_PhonemeDictionaryPath;
    
    USCCoreUserSettings();
};

