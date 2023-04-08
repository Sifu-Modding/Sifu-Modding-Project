#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NetOrderStructSnapAnim.h"
#include "NetOrderStructPushFromGrab.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FNetOrderStructPushFromGrab : public FNetOrderStructSnapAnim {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_ThrowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_ThrowTargetDir;
    
    SIFU_API FNetOrderStructPushFromGrab();
};

