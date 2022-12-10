#pragma once
#include "CoreMinimal.h"
#include "SCSoundSwitchValue.generated.h"

USTRUCT(BlueprintType)
struct FSCSoundSwitchValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_Group;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_State;
    
    SCCORE_API FSCSoundSwitchValue();
};

