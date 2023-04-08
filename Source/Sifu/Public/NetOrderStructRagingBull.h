#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "ERagingBullPhase.h"
#include "HitBox.h"
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructRagingBull.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructRagingBull : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERagingBullPhase m_ePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_HitBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_wallSplashFrontAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasMissedTarget;
    
    SIFU_API FNetOrderStructRagingBull();
};

