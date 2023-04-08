#pragma once
#include "CoreMinimal.h"
#include "SafeZoneBonePair.h"
#include "SafeZoneOrderService.h"
#include "BoneToBoneSafeZoneOrderService.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UBoneToBoneSafeZoneOrderService : public USafeZoneOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSafeZoneBonePair> m_bonePairList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fForcedRatio;
    
    UBoneToBoneSafeZoneOrderService();
};

