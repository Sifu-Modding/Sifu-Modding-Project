#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NetOrderStruct.h"
#include "NetOrderStructPlayBlendSpace.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct FNetOrderStructPlayBlendSpace : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* m_BlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vDefaultCoordinates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsInfinite;
    
    SIFU_API FNetOrderStructPlayBlendSpace();
};

