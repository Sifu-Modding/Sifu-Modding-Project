#pragma once
#include "CoreMinimal.h"
#include "ESpeedState.h"
#include "SCGameplayAbility.h"
#include "RushAbility.generated.h"

UCLASS(Blueprintable)
class SIFU_API URushAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState eMinNeededSpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResetGuard;
    
public:
    URushAbility();

};

