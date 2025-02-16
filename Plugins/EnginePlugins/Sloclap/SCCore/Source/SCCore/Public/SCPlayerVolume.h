#pragma once
#include "CoreMinimal.h"
#include "SCVolume.h"
#include "VolumeBeginOverlapSignatureDelegate.h"
#include "VolumeEndOverlapSignatureDelegate.h"
#include "SCPlayerVolume.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCPlayerVolume : public ASCVolume {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVolumeBeginOverlapSignature OnPlayerBeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVolumeEndOverlapSignature OnPlayerEndOverlap;*/
    
    ASCPlayerVolume(const FObjectInitializer& ObjectInitializer);

};

