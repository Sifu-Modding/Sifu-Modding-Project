#pragma once
#include "CoreMinimal.h"
#include "InheritedStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FInheritedStruct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideParentValue;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsEditable;
    
    FInheritedStruct();
};

