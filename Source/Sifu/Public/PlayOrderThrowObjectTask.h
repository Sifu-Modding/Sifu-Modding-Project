#pragma once
#include "CoreMinimal.h"
#include "EThrowObjectActionType.h"
#include "PlayOrderTask.h"
#include "PlayOrderThrowObjectTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UPlayOrderThrowObjectTask : public UPlayOrderTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThrowObjectActionType m_ThrowObjectActionType;
    
public:
    UPlayOrderThrowObjectTask();

};

