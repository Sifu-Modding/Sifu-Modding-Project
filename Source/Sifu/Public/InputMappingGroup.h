#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "InputMapping.h"
#include "InputMappingGroup.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<InputAction, FInputMapping> m_Mapping;
    
    SIFU_API FInputMappingGroup();
};

