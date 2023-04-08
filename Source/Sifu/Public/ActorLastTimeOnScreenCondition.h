#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseActorTargetCondition.h"
#include "ActorLastTimeOnScreenCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UActorLastTimeOnScreenCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_ValidTimeRangeCondition;
    
    UActorLastTimeOnScreenCondition();
};

