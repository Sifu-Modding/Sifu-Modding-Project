#pragma once
#include "CoreMinimal.h"
#include "SCPlayerVolume.h"
#include "SoundTransitionVolume.generated.h"

class USplineComponent;

UCLASS()
class SIFU_API ASoundTransitionVolume : public ASCPlayerVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    USplineComponent* m_SplineComponent;
    
    UPROPERTY(EditAnywhere)
    FName m_RTPC;
    
public:
    ASoundTransitionVolume();
};

