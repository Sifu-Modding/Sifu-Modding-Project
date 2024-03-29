#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PictoData.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FPictoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fIntensity;
    
    FPictoData();
};

