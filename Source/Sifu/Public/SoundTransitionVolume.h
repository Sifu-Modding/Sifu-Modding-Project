#pragma once
#include "CoreMinimal.h"
#include "SCPlayerVolume.h"
#include "SoundTransitionVolume.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class SIFU_API ASoundTransitionVolume : public ASCPlayerVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RTPC;
    
public:
    ASoundTransitionVolume();
};

