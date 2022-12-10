#pragma once
#include "CoreMinimal.h"
#include "SCPlayerVolumeNoPhysics.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WuguanCustomLightingUserParameters -FallbackName=WuguanCustomLightingUserParameters
#include "CustomLightingVolume.generated.h"

UCLASS()
class SIFU_API ACustomLightingVolume : public ASCPlayerVolumeNoPhysics {
    GENERATED_BODY()
public:
private:
  /*  UPROPERTY(EditAnywhere)
    FWuguanCustomLightingUserParameters m_Parameters;*/
    
public:
    ACustomLightingVolume();
};

