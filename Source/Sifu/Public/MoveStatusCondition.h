#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EMoveStatus.h"
#include "MoveStatusCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UMoveStatusCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveStatus m_eMoveStatus;
    
    UMoveStatusCondition();

};

