#pragma once
#include "CoreMinimal.h"
#include "FirewalkTimer.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FFirewalkTimer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeBeforeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeBetweenDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeOffsetAfterCinematics;
    
public:
    FFirewalkTimer();
};

