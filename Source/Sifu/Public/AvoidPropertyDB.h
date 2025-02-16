#pragma once
#include "CoreMinimal.h"
#include "EAvoidFeedbackTypes.h"
#include "SpecialAbilityPropertyDB.h"
#include "AvoidPropertyDB.generated.h"

class UAvoidPropertyDB;
class UCurveFloat;

UCLASS(Blueprintable)
class SIFU_API UAvoidPropertyDB : public USpecialAbilityPropertyDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAvoidedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AvoidedAttackScaleCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvoidFeedbackTypes m_eAvoidFeedbackTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAvoidedEnterDizzyOnAttacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvoidPropertyDB* m_AvoidDBOnDizzyAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShouldEndCombo;
    
    UAvoidPropertyDB();

};

