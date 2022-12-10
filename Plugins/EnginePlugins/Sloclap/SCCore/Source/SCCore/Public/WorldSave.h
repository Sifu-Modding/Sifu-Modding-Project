#pragma once
#include "CoreMinimal.h"
#include "WorldSave.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FWorldSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<uint8> m_WorldStateSaved;
    
    FWorldSave();
};

