#pragma once
#include "CoreMinimal.h"
#include "EVirtualAction.h"
#include "SaveInputAxisKeyMapping.h"
#include "SaveGameInputMappingKeySlot.generated.h"

USTRUCT(BlueprintType)
struct FSaveGameInputMappingKeySlot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EVirtualAction m_eVirtualAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSaveInputAxisKeyMapping> m_Axis;
    
    SIFU_API FSaveGameInputMappingKeySlot();
};

