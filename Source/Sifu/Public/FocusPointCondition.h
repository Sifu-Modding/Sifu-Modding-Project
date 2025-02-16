#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "FocusPointCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UFocusPointCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iValue;
    
    UFocusPointCondition();

};

