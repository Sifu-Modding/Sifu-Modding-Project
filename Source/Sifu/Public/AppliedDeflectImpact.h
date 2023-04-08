#pragma once
#include "CoreMinimal.h"
#include "AppliedHitImpact.h"
#include "AppliedDeflectImpact.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SIFU_API FAppliedDeflectImpact : public FAppliedHitImpact {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_KnockBackDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSelfStructureDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSelfSuperDizzyDamage;
    
    FAppliedDeflectImpact();
};

