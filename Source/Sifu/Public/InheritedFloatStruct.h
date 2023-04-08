#pragma once
#include "CoreMinimal.h"
#include "InheritedStruct.h"
#include "InheritedFloatStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FInheritedFloatStruct : public FInheritedStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fParentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFinalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFactorValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOffsetValue;
    
    FInheritedFloatStruct();
};

