#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EOperationType.h"
#include "VelocityCondition.generated.h"

UCLASS()
class SIFU_API UVelocityCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOperationType m_eOperation;
    
    UPROPERTY(EditAnywhere)
    float m_fVelocity;
    
    UVelocityCondition();
};

