#pragma once
#include "CoreMinimal.h"
#include "VolumesArray.generated.h"

class ASCVolume;

USTRUCT(BlueprintType)
struct FVolumesArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASCVolume*> m_Volumes;
    
    SIFU_API FVolumesArray();
};

