#pragma once
#include "CoreMinimal.h"
#include "OrderServiceActivationConditions.h"
#include "Templates/SubclassOf.h"
#include "OrderServiceIsPlayingActivationCondition.generated.h"

class UOrderService;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UOrderServiceIsPlayingActivationCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOrderService> m_InstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bStopWhenOrderServiceRunning;
    
    UOrderServiceIsPlayingActivationCondition();

};

