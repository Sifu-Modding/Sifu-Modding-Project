#pragma once
#include "CoreMinimal.h"
#include "SCVolume.h"
#include "SCPlayerVolumeNoPhysics.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCPlayerVolumeNoPhysics : public ASCVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTestOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFullyInsideTolerances;
    
public:
    ASCPlayerVolumeNoPhysics();
};

