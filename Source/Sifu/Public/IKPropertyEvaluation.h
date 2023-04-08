#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "SCUserDefinedEnumHandler.h"
#include "IKPropertyEvaluation.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FIKPropertyEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_Mirror;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference m_RootLimbBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference m_TipBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fBoneLocationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fBoneRotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fLimbRotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector m_vSelfReferenceBonePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector m_vTargetBonePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator m_TargetBoneRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform m_TipBoneWantedTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator m_LimbLocalRotation;
    
    FIKPropertyEvaluation();
};

