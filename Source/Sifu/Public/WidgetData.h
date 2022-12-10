#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WidgetData.generated.h"

UCLASS(BlueprintType)
class UWidgetData : public UObject {
    GENERATED_BODY()
public:
    UWidgetData();
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyDataUpdated();
    
};

