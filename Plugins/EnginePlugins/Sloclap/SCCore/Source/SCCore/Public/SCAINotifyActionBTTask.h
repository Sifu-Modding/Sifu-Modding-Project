#pragma once
#include "CoreMinimal.h"
#include "SCBTTaskNode.h"
#include "SCAINotifyActionBTTask.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCAINotifyActionBTTask : public USCBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EventName;
    
public:
    USCAINotifyActionBTTask();
};

