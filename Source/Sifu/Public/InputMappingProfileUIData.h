#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputMappingProfileUIData.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class SIFU_API UInputMappingProfileUIData : public UObject {
    GENERATED_BODY()
public:
    UInputMappingProfileUIData();
};

