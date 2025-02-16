#pragma once
#include "CoreMinimal.h"
#include "PlayOrderTask.h"
#include "PlayOrderRagingBullTask.generated.h"

class URagingBullDB;

UCLASS(Blueprintable)
class SIFU_API UPlayOrderRagingBullTask : public UPlayOrderTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URagingBullDB* m_ragingBullDB;
    
public:
    UPlayOrderRagingBullTask();

};

