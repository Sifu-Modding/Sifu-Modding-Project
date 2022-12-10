#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "ESpeedState.h"
#include "EOperationType.h"
#include "SpeedCondition.generated.h"

UCLASS()
class SIFU_API USpeedCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESpeedState m_eSpeedState;
    
    UPROPERTY(EditAnywhere)
    bool m_bAcceptMoveTransitions;
    
    UPROPERTY(EditAnywhere)
    EOperationType m_eOperation;
    
    USpeedCondition();
};

