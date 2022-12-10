#pragma once
#include "CoreMinimal.h"
#include "EMoveStatus.h"
#include "BaseActorCondition.h"
#include "MoveStatusCondition.generated.h"

UCLASS()
class SIFU_API UMoveStatusCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMoveStatus m_eMoveStatus;
    
    UMoveStatusCondition();
};

