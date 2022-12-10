#pragma once
#include "CoreMinimal.h"
#include "SCVolume.h"
#include "VolumeBeginOverlapSignatureDelegate.h"
//#include "VolumeEndOverlapSignatureDelegate.h"
#include "SCPlayerVolume.generated.h"

UCLASS()
class SCCORE_API ASCPlayerVolume : public ASCVolume {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintAssignable)
    FVolumeBeginOverlapSignature OnPlayerBeginOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FVolumeEndOverlapSignature OnPlayerEndOverlap;*/
    
    ASCPlayerVolume();
};

