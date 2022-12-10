#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ActorTransformOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UActorTransformOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_vTranslation;
    
    UPROPERTY(EditAnywhere)
    FRotator m_Rotation;
    
    UActorTransformOrderService();
};

