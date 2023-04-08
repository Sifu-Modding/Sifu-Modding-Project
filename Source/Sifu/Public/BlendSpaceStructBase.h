#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwapperStructBase.h"
#include "BlendSpaceStructBase.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct SIFU_API FBlendSpaceStructBase : public FSwapperStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* m_BlendSpace1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fPlayRate1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector m_Coordinates1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* m_BlendSpace2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fPlayRate2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector m_Coordinates2;
    
    FBlendSpaceStructBase();
};

