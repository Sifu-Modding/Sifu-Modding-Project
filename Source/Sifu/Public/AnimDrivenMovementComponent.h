#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimDrivenMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAnimDrivenMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseDisplacement;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisplacementCoeff;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotationCoeff;
    
public:
    UAnimDrivenMovementComponent();
};

