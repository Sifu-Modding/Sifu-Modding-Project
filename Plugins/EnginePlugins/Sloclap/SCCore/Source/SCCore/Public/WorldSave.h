#pragma once
#include "CoreMinimal.h"
#include "WorldSave.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FWorldSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_WorldStateSaved;
    
    FWorldSave();
};

