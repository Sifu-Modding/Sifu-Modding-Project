#pragma once
#include "CoreMinimal.h"
#include "RagingBullAnimContainer.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRagingBullAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAnimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fAnimPlayRate;
    
    SIFU_API FRagingBullAnimContainer();
};

