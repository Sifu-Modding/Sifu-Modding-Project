#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SCRangeFloatCurve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSCRangeFloatCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurveMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurveMin;
    
    SIFU_API FSCRangeFloatCurve();
};

