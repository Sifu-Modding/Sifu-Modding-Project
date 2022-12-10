#pragma once
#include "CoreMinimal.h"
#include "SCActorInfoGameArchive.generated.h"

class UObject;

USTRUCT()
struct FSCActorInfoGameArchive {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    UObject* m_Actor;
    
    UPROPERTY(SaveGame)
    UClass* m_ActorClass;
    
    UPROPERTY(SaveGame)
    TArray<uint8> m_Data;
    
    SCCORE_API FSCActorInfoGameArchive();
};

