#pragma once
#include "CoreMinimal.h"
#include "FrameRange.h"
#include "AbsorbWindow.generated.h"

class UAbsorbPropertyDB;

USTRUCT(BlueprintType)
struct FAbsorbWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRange m_FrameRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iAbsorbID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbsorbPropertyDB* m_AbsorbPropertyDB;
    
    SIFU_API FAbsorbWindow();
};

