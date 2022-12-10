#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "UObject/NoExportTypes.h"
#include "EAngleComputeMethod.h"
#include "AngleWithActorCondition.generated.h"

UCLASS()
class SIFU_API UAngleWithActorCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAngleComputeMethod m_eMethod;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_AngleRange;
    
    UAngleWithActorCondition();
};

