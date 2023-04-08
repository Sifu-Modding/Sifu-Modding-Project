#pragma once
#include "CoreMinimal.h"
#include "BaseAttackDataRow.h"
#include "EAttackMirroringMethod.h"
#include "EQuadrantTypes.h"
#include "AttackDataRow.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct SIFU_API FAttackDataRow : public FBaseAttackDataRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimationAsset> m_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanBeMirrored;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackMirroringMethod m_eMirroringMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMirrorUseNextFootMarkerThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eStartQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eEndQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMeasuredForwardMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMovementRightLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDirectRightMovementFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLastBuildupFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHitFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bStrikelessAttack;
    
    FAttackDataRow();
};

