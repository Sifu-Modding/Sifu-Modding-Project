#pragma once
#include "CoreMinimal.h"
#include "SCGestureAndBlendProfile.h"
#include "BaseActorConditionInstance.h"
#include "EFidgetMirroringTypes.h"
#include "EQuadrantTypes.h"
#include "SCConditionnalGestureAndBlendProfile.generated.h"

USTRUCT(BlueprintType)
struct FSCConditionnalGestureAndBlendProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFidgetMirroringTypes m_eMirrorWithQuadrantHandling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCGestureAndBlendProfile m_animContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBaseActorConditionInstance> m_Conditions;
    
    SIFU_API FSCConditionnalGestureAndBlendProfile();
};

