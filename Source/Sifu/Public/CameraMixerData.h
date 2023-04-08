#pragma once
#include "CoreMinimal.h"
#include "AbstractCameraData.h"
#include "Templates/SubclassOf.h"
#include "CameraMixerData.generated.h"

class UCameraMixerBlender;

UCLASS(Blueprintable)
class SIFU_API UCameraMixerData : public UAbstractCameraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbstractCameraData* m_StartCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbstractCameraData* m_EndCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraMixerBlender> m_BlenderClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseEndCamForTransition;
    
    UCameraMixerData();
protected:
    UFUNCTION(BlueprintCallable)
    void ImportTransitionsFromStartCam();
    
    UFUNCTION(BlueprintCallable)
    void ImportTransitionsFromEndCam();
    
};

