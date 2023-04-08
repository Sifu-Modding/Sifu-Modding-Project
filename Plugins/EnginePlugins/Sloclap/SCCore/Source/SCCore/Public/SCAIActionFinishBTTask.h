#pragma once
#include "CoreMinimal.h"
#include "SCBTTaskNode.h"
#include "SCAIActionFinishBTTask.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCAIActionFinishBTTask : public USCBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSucceeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_Message;
    
public:
    USCAIActionFinishBTTask();
};

