#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SCFootIkService.h"
#include "SCFootIkPredictionByVelocity.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCFootIkPredictionByVelocity : public USCFootIkService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_activationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinRequiredVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseLastGroundNormal;
    
public:
    USCFootIkPredictionByVelocity();

};

