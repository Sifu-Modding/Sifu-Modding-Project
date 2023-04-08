#pragma once
#include "CoreMinimal.h"
#include "HitImpact.h"
#include "DeflectImpact.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SIFU_API FDeflectImpact : public FHitImpact {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_KnockBackDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSelfStructureDamageCanGuardBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseSelfStructureDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSelfStructureDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseSelfSuperDizzyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSelfSuperDizzyDamage;
    
public:
    FDeflectImpact();
};

