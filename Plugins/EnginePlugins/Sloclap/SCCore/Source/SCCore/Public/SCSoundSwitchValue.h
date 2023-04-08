#pragma once
#include "CoreMinimal.h"
#include "SCSoundSwitchValue.generated.h"

USTRUCT(BlueprintType)
struct FSCSoundSwitchValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_State;
    
    SCCORE_API FSCSoundSwitchValue();
};

