#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "InputContext.h"
#include "InputPresetsEnumHandler.h"
#include "MappingID.generated.h"

USTRUCT(BlueprintType)
struct FMappingID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputPresetsEnumHandler m_PresetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputContext m_eContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUsePreset;
    
    SIFU_API FMappingID();
};

