#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OrderService.h"
#include "ActorTransformOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UActorTransformOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_Rotation;
    
    UActorTransformOrderService();
};

