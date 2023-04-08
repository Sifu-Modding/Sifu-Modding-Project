#pragma once
#include "CoreMinimal.h"
#include "SCAnimInstanceRef.generated.h"

class USCAnimInstanceBase;

USTRUCT(BlueprintType)
struct FSCAnimInstanceRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USCAnimInstanceBase* m_AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    SCCORE_API FSCAnimInstanceRef();
};

