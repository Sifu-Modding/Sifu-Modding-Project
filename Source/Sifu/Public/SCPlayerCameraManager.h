#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Camera/PlayerCameraManager.h"
#include "SCPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class SIFU_API ASCPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTViewTarget> m_ForcedViewTargetToUpdateUnderneath;
    
public:
    ASCPlayerCameraManager();
};

