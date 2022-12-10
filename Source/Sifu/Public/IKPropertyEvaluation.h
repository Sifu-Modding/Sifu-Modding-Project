#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IKPropertyEvaluation.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FIKPropertyEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_Mirror;
    
    UPROPERTY(EditAnywhere)
    FBoneReference m_RootLimbBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference m_TipBone;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fBoneLocationAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fBoneRotationAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fLimbRotationAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector m_vSelfReferenceBonePosition;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector m_vTargetBonePosition;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator m_TargetBoneRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform m_TipBoneWantedTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator m_LimbLocalRotation;
    
    FIKPropertyEvaluation();
};

