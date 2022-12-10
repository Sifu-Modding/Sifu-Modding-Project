#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructSnapAnim.h"
#include "UObject/NoExportTypes.h"
#include "NetOrderStructPushFromGrab.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FNetOrderStructPushFromGrab : public FNetOrderStructSnapAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<AActor> m_ThrowTarget;
    
    UPROPERTY(BlueprintReadWrite)
    FVector m_ThrowTargetDir;
    
    SIFU_API FNetOrderStructPushFromGrab();
};

