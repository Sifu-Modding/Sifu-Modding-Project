#pragma once
#include "CoreMinimal.h"
#include "EOperationType.h"
#include "BaseActorCondition.h"
#include "VelocityCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UVelocityCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOperationType m_eOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVelocity;
    
    UVelocityCondition();

};

