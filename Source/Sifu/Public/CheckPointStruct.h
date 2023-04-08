#pragma once
#include "CoreMinimal.h"
#include "CheckPointStruct.generated.h"

USTRUCT(BlueprintType)
struct FCheckPointStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_SpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_LevelToStreams;
    
    SIFU_API FCheckPointStruct();
};

