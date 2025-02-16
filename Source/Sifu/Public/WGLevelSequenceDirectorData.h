#pragma once
#include "CoreMinimal.h"
#include "SCLevelSequenceDirectorData.h"
#include "EPlayerCameraForcedSide.h"
#include "InputContext.h"
#include "WGLevelSequenceDirectorData.generated.h"

//class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API UWGLevelSequenceDirectorData : public USCLevelSequenceDirectorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputContext m_InputContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerCameraForcedSide m_eForcedPlayerCameraSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHideOwnerCarriedWeaponOnPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowOwnerCarriedWeaponOnFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceOutOfIdle;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // TArray<UAkAudioEvent*> m_AudioEventsOnStart;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // TArray<UAkAudioEvent*> m_AudioEventsOnFinish;
    
    UWGLevelSequenceDirectorData();

};

