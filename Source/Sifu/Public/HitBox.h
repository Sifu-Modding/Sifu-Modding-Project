#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BaseHitBoxConditionInstance.h"
#include "EAttackMovementType.h"
#include "EAttackOrigin.h"
#include "EAttackTarget.h"
#include "EIKAnimTargetTypes.h"
#include "FrameRange.h"
#include "HitBoxMetaDataClassInstance.h"
#include "HitboxDataRow.h"
#include "HitBox.generated.h"

class UBaseHitDetectionDB;

USTRUCT(BlueprintType)
struct SIFU_API FHitBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseHitBoxConditionInstance m_activationCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBoxMetaDataClassInstance m_MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_HitRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRange m_FrameRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseHitDetectionDB* m_HitDetectionDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackTarget m_eHitTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackTarget m_eAltHitTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIKAnimTargetTypes m_eAimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackMovementType m_eMovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackOrigin m_eOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackOrigin m_eAvoidCustomOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackTarget m_eAvoidCustomHitTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackMovementType m_eAvoidCustomMovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitboxDataRow m_CachedRow;
    
    FHitBox();
};

