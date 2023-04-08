#pragma once
#include "CoreMinimal.h"
#include "EInheritanceChoice.h"
#include "InheritedStruct.h"
#include "InheritedCurveFloatStruct.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SIFU_API FInheritedCurveFloatStruct : public FInheritedStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_parentCurveFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_finalCurveFloat;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInheritanceChoice m_eInheritanceChoice;
    
public:
    FInheritedCurveFloatStruct();
};

