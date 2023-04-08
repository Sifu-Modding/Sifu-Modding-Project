#pragma once
#include "CoreMinimal.h"
#include "HitRequest.h"
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructFightingState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FNetOrderStructFightingState : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitRequest m_Hit;
    
    SIFU_API FNetOrderStructFightingState();
};

