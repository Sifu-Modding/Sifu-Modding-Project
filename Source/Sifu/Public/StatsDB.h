#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SCFloatRange.h"
#include "SCInt32Range.h"
#include "StatsDB.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class SIFU_API UStatsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iRestatCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iChangeSchoolCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFightingStyleStatScaleCoef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_FightingStyleStatScaleBonusCurves[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_StatScaleBonusCurves[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_MaxStatDamageCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_WRScaleBonusCurves[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_MaxWRDamageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDamageBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCInt32Range m_MaxWeightStatLevelRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCFloatRange m_MaxWeightAtLevelRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iStatBonusMaxLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WeightCategoryThresholds[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fXPGainRatioForAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fXPGainRatioForKillingBlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iXPGainThresholdForKillingBlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_StrengthAverageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AgilityAverageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_WeightRatioAverageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_WeaponDamageAverageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AttackBonusCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_GearAttackBonusScaleCurves[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iBonusXPWhenPendantIsFull;
    
    UStatsDB();
};

