#pragma once
#include "CoreMinimal.h"
#include "HitBox.h"
#include "ETS_NextHitExtraInfos.generated.h"

USTRUCT(BlueprintType)
struct FETS_NextHitExtraInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_HitBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHitTime;
    
    SIFU_API FETS_NextHitExtraInfos();
};

