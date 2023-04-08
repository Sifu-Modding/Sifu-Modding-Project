#pragma once
#include "CoreMinimal.h"
#include "SpeedDescriptionStruct.generated.h"

USTRUCT(BlueprintType)
struct FSpeedDescriptionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float m_fBaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float m_fOverrAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPlayRate;
    
    SIFU_API FSpeedDescriptionStruct();
};

