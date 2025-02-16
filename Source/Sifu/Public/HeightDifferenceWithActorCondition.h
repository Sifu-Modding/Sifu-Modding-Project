#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "HeightDifferenceWithActorCondition.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class SIFU_API UHeightDifferenceWithActorCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_HeightDiffCurve;
    
    UHeightDifferenceWithActorCondition();

};

