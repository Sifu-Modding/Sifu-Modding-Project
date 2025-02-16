#pragma once
#include "CoreMinimal.h"
#include "EOperationType.h"
#include "BaseActorCondition.h"
#include "ESpeedState.h"
#include "SpeedCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API USpeedCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eSpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAcceptMoveTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOperationType m_eOperation;
    
    USpeedCondition();

};

