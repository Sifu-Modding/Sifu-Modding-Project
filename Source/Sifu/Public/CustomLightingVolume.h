#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WuguanCustomLightingUserParameters -FallbackName=WuguanCustomLightingUserParameters
#include "SCPlayerVolumeNoPhysics.h"
#include "CustomLightingVolume.generated.h"

UCLASS(Blueprintable)
class SIFU_API ACustomLightingVolume : public ASCPlayerVolumeNoPhysics {
    GENERATED_BODY()
public:
private:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FWuguanCustomLightingUserParameters m_Parameters;
    
public:
    ACustomLightingVolume();
};

