#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "BlackboardSubActorCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UBlackboardSubActorCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BlackboardKey;
    
    UBlackboardSubActorCondition();
};

