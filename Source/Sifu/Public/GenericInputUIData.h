#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GenericInputUIData.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class SIFU_API UGenericInputUIData : public UObject {
    GENERATED_BODY()
public:
    UGenericInputUIData();
};

