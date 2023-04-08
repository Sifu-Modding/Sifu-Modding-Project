#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "EMoveTransitionType.h"
#include "AnimStructMoveTransition.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructMoveTransition : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMoveTransitionType m_eTransitionType1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMoveTransitionType m_eTransitionType2;
    
    FAnimStructMoveTransition();
};

