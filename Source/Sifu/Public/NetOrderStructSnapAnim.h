#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructSnapAnim.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructSnapAnim : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsSnapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSnapOnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSyncID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsInstigator;
    
    SIFU_API FNetOrderStructSnapAnim();
};

