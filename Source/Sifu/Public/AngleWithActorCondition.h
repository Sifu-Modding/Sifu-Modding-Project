#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseActorTargetCondition.h"
#include "EAngleComputeMethod.h"
#include "AngleWithActorCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAngleWithActorCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAngleComputeMethod m_eMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_angleRange;
    
    UAngleWithActorCondition();

};

