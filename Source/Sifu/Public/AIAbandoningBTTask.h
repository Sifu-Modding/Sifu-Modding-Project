#pragma once
#include "CoreMinimal.h"
#include "AIBTTaskNode.h"
#include "EOrderType.h"
#include "AIAbandoningBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIAbandoningBTTask : public UAIBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EOrderType> m_NoReactionDuringOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EOrderType> m_PlayReactionAfterOrders;
    
public:
    UAIAbandoningBTTask();

};

