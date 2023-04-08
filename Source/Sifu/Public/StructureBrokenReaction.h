#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "BaseFightingStateBehavior.h"
#include "StructureBrokenReaction.generated.h"

USTRUCT(BlueprintType)
struct FStructureBrokenReaction : public FBaseFightingStateBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirrorableLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardCoefRecoveredAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardRecoveredAtEnd;
    
    SIFU_API FStructureBrokenReaction();
};

