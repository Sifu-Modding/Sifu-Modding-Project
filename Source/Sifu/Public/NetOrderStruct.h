#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.generated.h"

class AActor;
class UAbilityPayload;

USTRUCT(BlueprintType)
struct SIFU_API FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_TargetActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilityPayload> m_Payload;
    
    FNetOrderStruct();
};

