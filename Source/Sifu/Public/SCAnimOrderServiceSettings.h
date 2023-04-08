#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCAnimOrderServiceSettings.generated.h"

class UOrderService;

USTRUCT(BlueprintType)
struct FSCAnimOrderServiceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOrderService> m_OrderService;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDisable;
    
    SIFU_API FSCAnimOrderServiceSettings();
};

