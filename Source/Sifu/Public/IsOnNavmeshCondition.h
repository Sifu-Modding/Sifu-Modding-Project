#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "IsOnNavmeshCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UIsOnNavmeshCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDistTolerance;
    
    UIsOnNavmeshCondition();
};

