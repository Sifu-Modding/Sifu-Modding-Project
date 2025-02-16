#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SCBTDecorator.generated.h"

UCLASS(Abstract, Blueprintable)
class SCCORE_API USCBTDecorator : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEvaluateConditionOnTick;
    
    USCBTDecorator();

};

