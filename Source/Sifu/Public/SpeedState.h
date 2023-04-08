#pragma once
#include "CoreMinimal.h"
#include "ESpeedState.h"
#include "SpeedState.generated.h"

USTRUCT(BlueprintType)
struct FSpeedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bV0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bV1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESpeedState m_eSpeedState;
    
    SIFU_API FSpeedState();
};

