#pragma once
#include "CoreMinimal.h"
#include "SCFootIkService.h"
#include "SCFootIkPlanting.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCFootIkPlanting : public USCFootIkService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnore2DPlane;
    
public:
    USCFootIkPlanting();
};

