#pragma once
#include "CoreMinimal.h"
#include "SCAnimInstanceRef.generated.h"

class USCAnimInstanceBase;

USTRUCT(BlueprintType)
struct FSCAnimInstanceRef {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    USCAnimInstanceBase* m_AnimInstance;
    
    UPROPERTY(Transient)
    FName m_Name;
    
    SCCORE_API FSCAnimInstanceRef();
};

