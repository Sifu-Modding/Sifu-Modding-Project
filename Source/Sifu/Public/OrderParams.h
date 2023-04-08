#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OrderParams.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UOrderParams : public UObject {
    GENERATED_BODY()
public:
    UOrderParams();
};

