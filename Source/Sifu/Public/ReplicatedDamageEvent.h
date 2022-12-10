#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplicatedDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector m_vHurtOrigin;
    
    UPROPERTY()
    float m_fDemoTimeS;
    
    UPROPERTY()
    float m_fBaseDamage;
    
    UPROPERTY()
    float m_fDamageRadius;
    
    UPROPERTY()
    float m_fImpulseStrength;
    
    UPROPERTY()
    bool m_bFullDamage;
    
    SIFU_API FReplicatedDamageEvent();
};

