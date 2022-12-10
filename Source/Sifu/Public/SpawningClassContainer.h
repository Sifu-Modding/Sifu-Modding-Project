#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawningClassContainer.generated.h"

class ABaseCharacter;

USTRUCT(BlueprintType)
struct FSpawningClassContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSubclassOf<ABaseCharacter> m_SpawningClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName m_ImpostorCustomName;
    
    SIFU_API FSpawningClassContainer();
};

