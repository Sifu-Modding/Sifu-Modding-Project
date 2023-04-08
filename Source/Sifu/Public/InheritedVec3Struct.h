#pragma once
#include "CoreMinimal.h"
#include "InheritedFloatStruct.h"
#include "InheritedVec3Struct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FInheritedVec3Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritedFloatStruct m_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritedFloatStruct m_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritedFloatStruct m_Z;
    
    FInheritedVec3Struct();
};

