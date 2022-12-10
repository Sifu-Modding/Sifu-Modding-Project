#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ArenaParams.h"
#include "UObject/NoExportTypes.h"
#include "ArenaSettings.generated.h"

UCLASS()
class SIFU_API UArenaSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, FArenaParams> m_ArenaParams;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMaxNumberOfDifferentCharacterBP;
    
    UPROPERTY(EditAnywhere)
    int32 m_iNbImpostorPerClasses;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_fDelayBetweenSpawns;
    
    UPROPERTY(EditAnywhere)
    float m_fOutsideVolumeCaptureTimeDelay;
    
    UPROPERTY(EditAnywhere)
    float m_fBaseCaptureSpeedPerSecond;
    
    UPROPERTY(EditAnywhere)
    float m_fCaptureSpeedMultiplierPerScoreMultiplier[3];
    
    UPROPERTY(EditAnywhere)
    float m_fNoEnemyInsideHardpointMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableAllHardpointsEnemiesKilledMultiplier;
    
    UPROPERTY(EditAnywhere)
    float m_fAllHardpointsEnemiesKilledMultiplier;
    
    UPROPERTY(EditAnywhere)
    float m_fDelayBetweenHardpointActivation;
    
    UArenaSettings();
};

