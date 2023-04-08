#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SCSequenceParameters.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSCSequenceParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDestroyAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWantPushInputContext;
    
    SCCORE_API FSCSequenceParameters();
};

