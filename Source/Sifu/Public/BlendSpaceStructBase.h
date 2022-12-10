#pragma once
#include "CoreMinimal.h"
#include "SwapperStructBase.h"
#include "UObject/NoExportTypes.h"
#include "BlendSpaceStructBase.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct SIFU_API FBlendSpaceStructBase : public FSwapperStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    UBlendSpaceBase* m_BlendSpace1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float m_fPlayRate1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FVector m_Coordinates1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    UBlendSpaceBase* m_BlendSpace2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float m_fPlayRate2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FVector m_Coordinates2;
    
    FBlendSpaceStructBase();
};

