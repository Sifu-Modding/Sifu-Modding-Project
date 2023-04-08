#pragma once
#include "CoreMinimal.h"
#include "EMoveStatus.h"
#include "MoveStatus.generated.h"

USTRUCT(BlueprintType)
struct FMoveStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bExploration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bNone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMoveStatus m_eMoveStatus;
    
    SIFU_API FMoveStatus();
};

