#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "EAIConditionTraceRotationContext.h"
#include "EAIConditionTraceContext.h"
#include "AIConditionTraceOffset.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "ComboAIConditionTraceCollision.generated.h"

class AActor;
class UAIFightingComponent;

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionTraceCollision : public UAIComboCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bShouldHit;
    
    UPROPERTY(EditAnywhere)
    EAIConditionTraceContext m_eFrom;
    
    UPROPERTY(EditAnywhere)
    EAIConditionTraceContext m_eTo;
    
    UPROPERTY(EditAnywhere)
    FAIConditionTraceOffset m_FromOffset;
    
    UPROPERTY(EditAnywhere)
    FAIConditionTraceOffset m_ToOffset;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_TraceChannel;
    
    UPROPERTY(EditAnywhere)
    FCollisionResponseContainer m_TraceCollision;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvTraceShape::Type> m_eShape;
    
    UPROPERTY(EditAnywhere)
    FVector m_vShapeExtents;
    
    UPROPERTY(EditAnywhere)
    EAIConditionTraceRotationContext m_ShapeRotationRelativeTo;
    
public:
    UComboAIConditionTraceCollision();
    UFUNCTION(BlueprintPure)
    bool BPF_TestEQCondition(const UAIFightingComponent* _aiComponent, const AActor* _target) const;
    
};

