#pragma once
#include "CoreMinimal.h"
#include "EFightingState.h"
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructFightingStateRecovery.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructFightingStateRecovery : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFightingState m_eFightingState;
    
    SIFU_API FNetOrderStructFightingStateRecovery();
};

