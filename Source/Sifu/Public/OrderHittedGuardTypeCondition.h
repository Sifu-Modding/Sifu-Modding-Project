#pragma once
#include "CoreMinimal.h"
#include "EGuardType.h"
#include "OrderServiceActivationConditions.h"
#include "OrderHittedGuardTypeCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UOrderHittedGuardTypeCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCheckWasGuarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWasGuarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCheckGuardBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWasGuardBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCheckGuardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGuardType m_eGuardType;
    
    UOrderHittedGuardTypeCondition();

};

