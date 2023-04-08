#pragma once
#include "CoreMinimal.h"
#include "MovementMode.generated.h"

USTRUCT(BlueprintType)
struct FMovementMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bNone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bNavWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bSwimming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCustom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_replicatedMvtMode;
    
    SIFU_API FMovementMode();
};

