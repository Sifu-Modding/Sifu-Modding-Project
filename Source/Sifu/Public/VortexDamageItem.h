#pragma once
#include "CoreMinimal.h"
#include "UsableItem.h"
#include "VortexDamageItem.generated.h"

UCLASS(Blueprintable)
class SIFU_API AVortexDamageItem : public AUsableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDistanceToTarget;
    
    AVortexDamageItem();
};

