#pragma once
#include "CoreMinimal.h"
#include "SCFootIkRaycast.h"
#include "SCFootIkCliffRaycast.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCFootIkCliffRaycast : public USCFootIkRaycast {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCliffTraceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCliffOffset;
    
public:
    USCFootIkCliffRaycast();

};

