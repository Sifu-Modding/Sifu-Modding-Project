#pragma once
#include "CoreMinimal.h"
#include "AIBTTaskNode.h"
#include "AIDefenseBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIDefenseBTTask : public UAIBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFinishWhenIsNotStun;
    
public:
    UAIDefenseBTTask();

};

