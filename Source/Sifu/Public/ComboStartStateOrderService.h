#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "ComboStartStateOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboStartStateOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ComboStartName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ComboStartPostOrderName;
    
    UComboStartStateOrderService();
};

