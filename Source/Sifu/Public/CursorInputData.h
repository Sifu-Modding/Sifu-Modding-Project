#pragma once
#include "CoreMinimal.h"
#include "VectorInputData.h"
#include "CursorInputData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UCursorInputData : public UVectorInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNormalize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNormalizeRegionRadius;
    
    UCursorInputData();

};

