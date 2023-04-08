#pragma once
#include "CoreMinimal.h"
#include "EInheritanceChoice.h"
#include "InheritedStruct.h"
#include "InheritedBoolStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FInheritedBoolStruct : public FInheritedStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bParentBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFinalBool;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInheritanceChoice m_eInheritanceChoice;
    
public:
    FInheritedBoolStruct();
};

