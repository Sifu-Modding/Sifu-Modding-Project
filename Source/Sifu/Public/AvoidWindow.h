#pragma once
#include "CoreMinimal.h"
#include "EAvoidType.h"
#include "FrameRange.h"
#include "AvoidWindow.generated.h"

class UAvoidPropertyDB;

USTRUCT(BlueprintType)
struct FAvoidWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRange m_FrameRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iAvoidID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvoidType m_eAvoidType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvoidPropertyDB* m_AvoidPropertyDB;
    
    SIFU_API FAvoidWindow();
};

